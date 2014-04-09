#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int info,bf;
struct node *left,*right;
}node;
node * getnode(int n)
{
node *newnode;
newnode=(node *)malloc(sizeof(node));
newnode->info=n;
newnode->left=newnode->right=0;
newnode->bf=0;
return newnode;
}
void nearnode(node *ptr,node **temp,node *temppar,node **par)
{
if(ptr!='\0')
{
if((ptr->bf)>1 || (ptr->bf)<-1)
{
*par=temppar;
*temp=ptr;
}
nearnode(ptr->left,temp,ptr,par);
nearnode(ptr->right,temp,ptr,par);
}
}
int max(int a,int b)
{
if(a>b)
return a;
return b;
}
node * mkavl(node *root,node *ptr,node *par,node *child)
{
node *tempr,*templ,*temp;
if(ptr->bf>=0 && child->bf>=0)
{
tempr=child->right;
ptr->left=tempr;
child->right=ptr;
if(par!=0)
{
if(par->left==ptr)
par->left=child;
else
par->right=child;
}
else
root=child;
return root;
}
else
{
if(ptr->bf<0 && child->bf<0)
{
templ=child->left;
ptr->right=templ;
child->left=ptr;
if(par!=0)
{
if(par->right==ptr)
par->right=child;
else
par->left=child;}
else
root=child;
return root;
}
else
{if(ptr->bf>=0 && child->bf<0)
{
temp=child->right;
templ=temp->left;
tempr=temp->right;
ptr->left=tempr;
child->right=templ;
temp->left=child;
temp->right=ptr;
if(par!=0)
{if(par->left==ptr)
par->left=temp;
else
par->right=temp;}
else
root=temp;
return root;
}
else
{
temp=child->left;
templ=temp->left;
tempr=temp->right;
child->left=tempr;
ptr->right=templ;
temp->right=child;
temp->left=ptr;
if(par!=0)
{if(par->left==ptr)
par->left=temp;
else
par->right=temp;
}
else
root=temp;
return root;
}
}
}
}
int height(node *ptr)
{
if(ptr!='\0')
{
return (1+max(height(ptr->left),height(ptr->right)));
}
else
return 0;
}
void assighbf(node *ptr)
{
if(ptr)
{
ptr->bf=height(ptr->left)-height(ptr->right);
assighbf(ptr->left);
assighbf(ptr->right);
}
}
node * insert(node *root,node *newnode)
{
node *ptr,*prev;
if(root=='\0')
root=newnode;
else
{
ptr=root;
do
{
prev=ptr;
if(newnode->info<ptr->info)
ptr=ptr->left;
else
ptr=ptr->right;

}while(ptr);
if(prev->info>newnode->info)
prev->left=newnode;
else
prev->right=newnode;
}
assighbf(root);
ptr='\0';
node *par='\0';
nearnode(root,&ptr,'\0',&par);
if(ptr!=0)
{
printf("tree was adjusted bcz it was unbalanced\n");
node *child;
if(newnode->info>ptr->info)
child=ptr->right;
else
child=ptr->left;
root=mkavl(root,ptr,par,child);
assighbf(root);
}
return root;
}
void preorder(node *ptr)
{
if(ptr)
{
printf("%d %d\n",ptr->info,ptr->bf);
preorder(ptr->left);
preorder(ptr->right);
}
}
int main()
{
int n;
node *root=0,*newnode;
printf("enter info and enter -999 for end\n");
scanf("%d",&n);
while(n!=-999)
{
if(n==-999)
break;
newnode=getnode(n);
root=insert(root,newnode);
scanf("%d",&n);
}
preorder(root);
getch(); //for Dev C
//return 0; //for gcc(linux environment)
}
