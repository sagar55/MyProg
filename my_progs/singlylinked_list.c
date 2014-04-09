//insert,delete &searching in a singly link list
#include<stdio.h>
#include<stdlib.h>
      typedef struct linkedlist
      {
              int val;
              struct linkedlist *next;
      }node;
node *getnode(int n)
{
     node *temp=(node*)malloc(sizeof(node));
     temp->val=n;
     temp->next='\0';
     return temp;
}
node *insert(node *head,int n)
{
     node *temp,*p=head,*q='\0';
     temp=getnode(n);
     if(head=='\0')
     head=temp;
     else
     {
     while(p!='\0'&& p->val<n)
        {
              q=p;
              p=p->next;
        }  
         if(p=='\0')
                     q->next=temp;
         else if(q=='\0')
         {
                 temp->next=head;
                 head=temp;
         }
         else 
         {
             q->next=temp;
             temp->next=p;
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
             p->next='\0';
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




        
