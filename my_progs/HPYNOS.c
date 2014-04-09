#include<stdio.h>
#include<stdlib.h>
struct node
{
       int info;
       struct node *next;
       };
       typedef struct node node;
       node *getnode(int n)
       {
            node *new=(node *)malloc(sizeof(node));
            new->info=n;
            new->next='\0';
            return new;
        }
       node *insnode(node *head,int n,int *a)
       {
            node *p=head,*q='\0';
            node *new=getnode(n);
            *a=1;
            if(head=='\0')
            head=new;
            else
            {while(p!='\0'&&p->info!=n)
            {q=p;
            p=p->next;
                 }
                 if(p!='\0'&&p->info==n)*a=0;
                else{ q->next=new;
                 new->next=p;}
                 } return head;
        }
       main()
       {
             node *head='\0';
             int t,i=0,sum,a,b=1;
             scanf("%d",&t);
             while(t!=1)
             {
                        sum=0;
                        while(t!=0)
                        {
                            a=t%10;
                            sum+=a*a;
                            t=t/10;}
       head=insnode(head,sum,&b);
                            if(b==0){printf("-1\n"); break;}     
                                   t=sum;i++;}
                                   if(b==1)printf("%d",i); scanf("%d",&t);
             return (0);
             }

