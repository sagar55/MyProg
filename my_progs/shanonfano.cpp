#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;
#define FOR(i,a,b)				for(int i=a;i<b;i++)
int a[10];
bool myfunction (int i,int j) { return (i>j); }
typedef struct node{
        int p;
        int q;
        struct node *l;
        struct node *r;
        }node;
node *getnode(int pp,int qq)
{
node *temp=(node*)malloc(sizeof(node));
temp->p=pp;
temp->q=qq;
temp->l='\0';
temp->r='\0';
return temp;
}
void solve(node *root)
{
       if(root->q!=root->p)
       {
        int i,diff,str,j,min=1000;
        for(i=root->p;i<=root->q;i++)
        {
        int m=0,n=0;
        for(j=root->p;j<=i;j++)
        m+=a[j];
        for(j=i+1;j<=root->q;j++)
        n+=a[j];
        diff=abs(m-n);
        if(diff<min)
        {
        min=diff;
        str=i;
        }
        }
        root->l=getnode(root->p,str);
        root->r=getnode(str+1,root->q);
        solve(root->l);
        solve(root->r);
        }
       }
       int stk[10];
int travel(node *root,int x,int y)
{
int r;
if(root!='\0'){
stk[y]=x;
r=travel(root->l,0,y+1);
if(r!=-1)
travel(root->r,1,y+1);
return 1;
}
else
{
   for(int i=0;i<y;i++)
   printf("%d",stk[i]);
   printf("\n"); 
   return -1;          
}
}
main()
{
      node *root,*h1,*h2;
      int n;
      printf("enter no of values whose code is to be find\n");
      scanf("%d",&n);
      printf("enter frequency for each of the value\n");
      FOR(i,0,n)
      scanf("%d",&a[i]);
      sort(a,a+n,myfunction);
      root=getnode(0,n-1);
     h1=root;
     h2=root;
     printf("shanonfano code for each values are\n");
      solve(root);
    travel(h1->l,0,0);
    travel(h2->r,1,0);
   return 0;
       }
