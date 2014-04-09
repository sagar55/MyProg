//generate fibbonacci series upto nth term
#include<stdio.h>
typedef struct 
 {
 long long int n;
 long long int stk[MAX];
 }stack;
void clear(stack *s)
{
     s->n=0;
}
void push(stack *s,long long int val)
{
           s->stk[s->n++]=val;
}
int pop(stack *s)
{
           return s->stk[--s->n];
}
long long int m;
main()
{
      int t;
      long long int j,n;
      scanf("%d",&t);
      while(t){
                  clear(&s);
      scanf("%lld%lld",&n,&m);
            printf("%d\t",(fibbR(n)));
            t--;
            }
getch();
}
int fibbR(long long int n)
{
     long long int m,x=2,y;
    stack s;
    push(&s,1);
    push($s,1);
             if(x==1){
    return (pop(&s));
    push(&s,y);}
    if(x==2){
             y=pop(&s);
    return y;x--;}
    else{
         m=((fibbR(n-1))+(fibbR(n-2))+(n-1))%m;
         push(&s,m);
    x++;
}
}

 
