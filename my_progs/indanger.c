#include<stdio.h>
#include<stdlib.h>
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
node *insert(node *head,node *tail,int n)
{
     node *new;
     new=getnode(n);
     if(head=='\0')
     {
     head=new;
     new->next=head;
     tail=head;
     return head;
     }
     else
     {
                     tail->next=new;
                     tail=tail->next;
                     new->next=head;          
         return tail;
     }
 }        
node *delete(node *head,int n)
{
     node *p,*q;
     if(n==1){
              p=head;}
    else{
         p=head->next;}
         q=p;
         while(q->next!=p)
         {q=q->next;}
            while(p->next->next!=q)
            {
                           q->next=p->next;
                    p->next='\0';
                    q=q->next;
                    p=q->next;             
     }
     return p->next;
     } 
     
main()
{
       
      int i,n,m;
      char t[5];
      node *head='\0',*tail='\0';
      scanf("%s",t);
      m=(t[0]-48)*10+(t[1]-48);
      for(i=0;i<(t[3]-48);i++)
      m=m*10;
      while(m!=0){
                  n=m;
               head='\0';
               if(n==1||n==2||n==4)
               printf("1\n");
               else if(n==3)
                       printf("3\n");
                       else{
                            head=insert(head,head,1);
                            tail=head;
           for(i=3;i<=n;i=i+2)
           tail=insert(head,tail,i);
           if(n%2==0)
           head=delete(head,0);
           else
           head=delete(head,1);
                       printf("%d\n",head->val);}
  scanf("%s",t);
      m=(t[0]-48)*10+(t[1]-48);
      for(i=0;i<(t[3]-48);i++)
      m=m*10;
}
return 0;
}




        
