#include<stdio.h>
struct node
{
       int val;
       int add;
       struct node *next;
}*head,*tail;
int flag,c;
int f(int item)
{
     struct node *temp,*temp2,*r,*p,*q;
      int k,i;
     r=(struct node*)malloc(sizeof(struct node));
     temp=(struct node*)malloc(sizeof(struct node));
     r->next=NULL;
     temp->val=item;
     temp->add=0;
     temp->next=NULL;
     c++;
    
     if(head==NULL)
     {
                    head=temp;
                    tail=head;
                 
     }
     else if(head->val>temp->val)
     {
          temp->next=head;
          head=temp;
          
     }
     else if(head->val==temp->val)
     {
          flag=1;
          return 1;
     }
     else
     {     
           p=head;
         while(p->next!=NULL&&p->next->val<temp->val)
         {
                                             p=p->next;
         }
         if(p->next&&(p->next->val==temp->val))
         {
                                      flag=1;
                                      return 1;
         }
         if(p->next==NULL)
         {
                       temp->next=p->next;
                       p->next=temp;
                       tail=temp;
     
          }
          else
          {
               temp->next=p->next;
                       p->next=temp;
               
          }
                       
     }
      p=head;
     
  while(p!=NULL)
  {
                if(p->val!=temp->val&&p->add==0)
{
             temp2=(struct node*)malloc(sizeof(struct node));
                                    temp2->val=p->val+item;
                                    temp2->next=NULL;
                                    temp2->add=1;
                                    q=p;
                                     while(q->next!=NULL&&q->next->val<temp2->val)
                                    {
                                                        q=q->next;
                                    }
                                    if(q->next==NULL)
                                    {
                                                     temp2->next=q->next;
                                                     q->next=temp2;
                                                     tail=temp2;
                                    }
                                    else if(q->val==temp2->val)
                                    {
                                         flag=1;
                                         return 1;
                                    }
                                    else
                                    {
                                        temp2->next=q->next;
                                                     q->next=temp2;
                                        }
                }
                p=p->next;
  }
  
                                                                        
                
      
      p=head;
      while(p!=NULL)
      {
                   p->add=0;
                 p=p->next;
      }
      p=head;
      while(p!=NULL)
      {
                   if(p->next&&(p->val==p->next->val))
                   flag=1;
                   p=p->next;
      }
}               

main()
{
     int i,n,k,t,y;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                head=NULL;
                flag=0;
                c=0;
                tail=NULL;
                for(i=1;i<=n;i++)
                {
                                scanf("%d",&y);
                                 if(flag!=1)
                                 f(y);  
                 }
                 if(flag==1)
                 printf("YES\n");
                 else
                 printf("NO\n");
      }
      return 0;
}
