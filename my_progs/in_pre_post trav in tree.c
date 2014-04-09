#include<stdio.h>
#include<stdlib.h>
 typedef struct node
      {
              int val;
              struct node *left,*right;
      }node;
node *getnode(int n)
{
     node *new=(node*)malloc(sizeof(node));
     new->val=n;
     new->left=new->right='\0';
     return new;
}
node *insert(node *root,int n)
{
     node *p=root;
     if(root=='\0')
          root=getnode(n);
     else
     {
         while(1)
         {
                 if(p->val>n)
                 {
                             if(p->left=='\0')
                             {
                                    p->left=getnode(n);
                                    break;
                             }
                             else
                                    p=p->left;
                 }
                 else
                 {
                              if(p->right=='\0')
                              {      
                                     p->right=getnode(n);
                                     break;
                              }
                              else
                                    p=p->right;
                 }
         }
     }  
return root;
}

void inorder(node *root)
{
     if(root!='\0')
     {
                   inorder(root->left);
                   printf("%d\t",root->val);
                   inorder(root->right);
     }
}

void preorder(node *root)
{
     if(root!='\0')
     {
                   printf("%d\t",root->val);
                   preorder(root->left);
                   preorder(root->right);
     }
}

void postorder(node *root)
{
     if(root!='\0')
     {
                   postorder(root->left);
                   postorder(root->right);
                   printf("%d\t",root->val);
     }
}

main()
{
      node *root='\0';
      int i,n;
      while(1)
      {
      printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.exit\nenter command\t");
      scanf("%d",&i);
      if(i==1)
      {
           printf("enter no. for insert\t");
           scanf("%d",&n);
           root=insert(root,n);
      }
      else if(i==2)
           inorder(root);
      else if(i==3)
           preorder(root);
      else if(i==4)
           postorder(root);
      else if(i==5)
           exit(1);
           else
           break;
      }
      getch();
}
           
                     
      
      




        
