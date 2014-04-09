#include<stdio.h>
struct node
{
       int coeff;
       struct node *next;
       };
       typedef struct node node;
       node *getnode(int n)
       {
            node *new=(node *)malloc(sizeof(node));
            new->coeff=n;
            new->next='\0';
            return new; 
        }
       node *insnode(node *head, int n)
        {
           node *p=head,*q='\0';
           node *new=getnode(n);
           if(head=='\0')
           head=new;
           else
           {   new->next=head;head=new; } return head;}
     int poleval(node *p,int n,int x)
     {
         node *q=p;
         long long int val=0,a=1;
         while(n-->-1){
                    val+=q->coeff*a;
                    q=q->next;
                    a*=x;}return val;}                                    
main()
{
      node *head;
      int n,a,i,x,j=1;
      long long int m;
     scanf("%d",&n);
     while(n!=-1)
     {i=n;head='\0';for(i=n+1;i>0;i--)
                 {
                              scanf("%d",&m);
                              head=insnode(head,m);
                              }
                  scanf("%d",&a); 
                  printf("Case %d:\n",j++); 
                  while(a-->0)
                  { scanf("%d",&x);m=poleval(head,n,x); printf("%lld\n",m);}scanf("%d",&n);
                 } return 0;
                       }


