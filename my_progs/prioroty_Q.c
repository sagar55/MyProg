//implement priority queue using link list
#include<stdio.h>
#include<stdlib.h>
      typedef struct linkedlist
      {
              int val;
              int pri;
              struct linkedlist *next;
      }node;
node *getnode(int n,int p)
{
     node *new=(node*)malloc(sizeof(node));
     new->val=n;
     new->pri=p;
     new->next='\0';
     return new;
}
node *insert(node *head,int n,int pp)
{
     node *new,*p=head,*q='\0';
     new=getnode(n,pp);
     if(head=='\0')
     head=new;
     else
     {
     while(p!='\0'&& p->pri<=pp)
        {
              q=p;
              p=p->next;
        }  
         if(p=='\0')
                     q->next=new;
         else if(q=='\0')
         {
                 new->next=head;
                 head=new;
         }
         else 
         {
             q->next=new;
             new->next=p;
         }
     }
     return head;
}
             
void display(node *head)
{
   node *p=head;
   if(head=='\0')
     printf("list is empty\n");
   else
   {
       printf("\n");
       while(p!='\0')
       {
                   printf("%d-->",p->val);
                   p=p->next;
       }
       printf("\n");
   }
}
void search(node *head,int n)
{
     node *p=head;
     if(head=='\0')
     printf("list is empty\n");
     else
     {
         while(p!='\0')
         {
         if(p->val==n)
         {
                      printf("%d is found in list\n",n);
                      break;
         }
         else
         p=p->next;
         }
         if(p=='\0')
         printf("%d is not in list\n",n);
     }
}
main()
{
       
      int i,n,pp;
      node *head='\0';
      while(1)
      {
      printf("\n1.insert\n2.display\n3.search\n4.exit\nenter command\t");
      scanf("%d",&i);
      if(i==1)
      {
           printf("enter no. for insert & its priority also\t");
           scanf("%d%d",&n,&pp);
           head=insert(head,n,pp);
      }
      else if(i==2)
           display(head);
      else if(i==3)
      {
           printf("enter no. for search\t");
           scanf("%d",&n);
           search(head,n);
      }     
      else if(i==4)
           exit(1);
      else
      {
      printf("don't you like to follow instruction\tenter right command");    
      continue;   
      }
      }
getch();
}




        
