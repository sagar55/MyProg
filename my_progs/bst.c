#include<stdio.h>
#include<stdlib.h>
int count=-1;
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
      count++;
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
                             else{ count++;
                                    p=p->left;}
                 }
                 else
                 {
                              if(p->right=='\0')
                              {      
                                     p->right=getnode(n);
                                     break;
                              }
                              else{ count++;
                                    p=p->right;}
                 }
         }
     }  
return root;
}


main()
{
      node *root='\0';
      int i,n;
       scanf("%d",&i);
      while(i--)
      {
           scanf("%d",&n);
           root=insert(root,n);
         printf("%d\n",count);
      }
      getch();
}
