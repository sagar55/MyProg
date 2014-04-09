#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
       float info;
       struct node *next;
       };
       typedef struct node node;
       node *getnode(float n)
       {
            node *new=(node *)(malloc)(sizeof(node));
            new->info=n;
            new->next='\0';
            return new;
        }
        node *insnode(node *head,float n)
        {
           node *p=head,*q='\0';
           node *new=getnode(n);
           if(head=='\0')
           head=new;
           else
           {
               while(p!='\0'&&p->info<n)
               {
                               q=p;
                               p=p->next;
                               }
                               if(q=='\0')
                               {
                                          if(p->info!=n){
                                          new->next=head;
                                          head=new;}
                               }
                               else if(p!='\0'&&p->info!=n)
                               {
                                                      q->next=new;new->next=p;
                                                      }
                                                      else
                                                      {q->next=new;}
                                                      
           }
           return (head);}
      
        main()
        {
              node *head,*q;
              int t,n;
              float a,max,min;char b[50];
              scanf("%d",&t);
              while(t-->0)
              {
                          max=0.00;
                          head='\0';
                          scanf("%d",&n);
                          while(n-->0)
                          {
                                      scanf("%s%f",b,&a);
                                      if(a>max){max=a;}
                                      head=insnode(head,a);
                                      }min=max-head->info;q=head->next;
                                      while(q!='\0')
                                      {
                                                       a=head->info+360-q->info;
                                                       if(min>a)min=a;
                                                       head=head->next;q=q->next;
                                                       }
                                                       min=min*12;
                                                      n=ceil(min);
                                                      printf("%d\n",n);
                          }
             return 0;
             }





