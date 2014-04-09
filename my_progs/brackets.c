#include<stdio.h>
#define MAX 2000
int f=0;
 typedef struct 
 {
 int n;
 char stk[MAX];
 }stack;
void clear(stack *s)
{
     s->n=0;
}
void push(stack *s,char val)
{
    
           s->stk[s->n++]=val;
}
int pop(stack *s)
{
     if(s->n==0)
     {
        f=1; return 0  ;
     }
     else
           return s->stk[--s->n];
}
main()
{
      char in[2000];
      int i,t,j;
      stack s;
      scanf("%d",&t);
      while(t){
               scanf("%s",in);
      clear(&s);
      f=0;
      for(i=0;in[i]!='\0';i++)
      {
                              if(in[i]=='{')
                              push(&s,in[i]);
                              else
                              {pop(&s);
                                  if(f==1)
                               { printf(":(");
                               break;}
                               }}
                        if(f==0&&(s.n)==0)
                        printf(":)");
                        t--;}     
                          getch();}     
                              
                 
     
     
 
