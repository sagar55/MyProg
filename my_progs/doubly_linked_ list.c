//insert,delete &searching in a doubly link list
#include<stdio.h>
#include<stdlib.h>
      typedef struct linkedlist
      {
              int val;
              struct linkedlist *pre,*next;
      }node;
node *getnode(int n)
{
     node *new=(node*)malloc(sizeof(node));
     new->val=n;
     new->next=new->pre='\0';
     return new;
}
node *insert(node *head,int n)
{
     node *new,*p=head,*q='\0';
     new=getnode(n);
     if(head=='\0')
     head=new;
     else
     {    
     while(p!='\0'&& p->val<n)
        {
              q=p;
              p=p->next;
        }        
         if(p=='\0')
             {          
                     q->next=new;
                     new->pre=q;
               }
         else if(q=='\0')
         {
                 new->next=p;
                 p->pre=new;
                 head=new;
         }
         else 
         {
             q->next=new;
             new->next=p;
             p->pre=new;
             new->pre=q;
         }
     }
     return head;
}
             
node *delete(node *head,int n)
{
     node *p=head,*q='\0';
     int i=1;
     if(head=='\0')
     printf("list is empty\n");
     else if(head->val==n)
     {
          head=head->next;
          p->next->pre='\0';
          p->next='\0';
          free(p);
     }
     else
     {
         while(p!='\0'&&p->val<=n)
        {
         if(p->val==n)
         {
             q->next=p->next;
             if(p->next!='\0')
             p->next->pre=q;
             p->next=p->pre='\0';
             i=0;
             free(p);
             break;
         }
        else
         {
            q=p;
            p=p->next;
         }
        }
        if(p=='\0'||p->val>n&&i==1)
        printf("%d is not found in list\n",n);
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
                   printf("<--%d-->",p->val);
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
       
      int i,n;
      node *head='\0';
      while(1)
      {
      printf("\n1.insert\n2.delete\n3.display\n4.search\n5.exit\nenter command\t");
      scanf("%d",&i);
      if(i==1)
      {
           printf("enter no. for insert\t");
           scanf("%d",&n);
           head=insert(head,n);
      }
      else if(i==2)
      {
           printf("enter no. for deletion\t");
           scanf("%d",&n);
           head=delete(head,n);
      }
      else if(i==3)
           display(head);
      else if(i==4)
      {
           printf("enter no. for search\t");
           scanf("%d",&n);
           search(head,n);
      }
      else if(i==5)
           exit(1);
      else
      {
      printf("don't you like to follow instruction\tenter right command");    
      continue;   
      }
      }
getch();
}




        
