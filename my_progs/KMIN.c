#include<stdio.h>
#include<stdlib.h>
int count=0,last;
      typedef struct linkedlist
      {
              int val;
              struct linkedlist *next;
      }node;
node *getnode(int n)
{
     node *new=(node*)malloc(sizeof(node));
     new->val=n;
     new->next='\0';
     return new;
}
node *insert(node *head,int n)
{
     node *new,*p=head,*q='\0';
     new=getnode(n);
     if(head=='\0'){
     head=new;last=n;
     }
     else
     {
     while(p!='\0'&& p->val<n)
        {
              q=p;
              p=p->next;
        }  
         if(p=='\0')
               {      q->next=new;last=n;}
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
             
node *delete(node *head)
{
     node *p=head,*q='\0';
     int i=1;
      while(p->next!='\0')
      { q=p;
      p=p->next;
     }
         q->next='\0';
         free(p);
         last=q->val;
return head;
} 
main()
{
       
      int i,n,q,p;
      node *head='\0';
      scanf("%d%d",&q,&n);
      while(q--)
      {
           scanf("%d",&p);
           if(p!=-1){
           count++;
           if(count<=n)
           head=insert(head,p);
           else
           {
           if(p<last)
           { 
           head=delete(head);
           head=insert(head,p);
           }
           }
           }
           else
           printf("%d\n",last);
           }
getch();
}
