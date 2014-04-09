//infix to postfix conversion
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 20

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
     if(s->n==MAX)
     {
           printf("stack overflow");
           exit(1);
           }
     else
           s->stk[s->n++]=val;
}
int pop(stack *s)
{
     if(s->n==0)
     {
           printf("stack underflow");
           exit(1);
     }
     else
           return s->stk[--s->n];
}
int eval(char op,int i,int j)
{
    if(op=='+')
           return j+i;
    else if(op=='-')
           return j-i;
    else if(op=='*')
           return j*i;
    else if(op=='/') 
           return j/i;
    else if(op=='^')
           return pow(j,i);
    else if(op=='%')
           return j%i;
    else
           printf("not a definrd operator\n");
}
int get(stack s)
{
     if(s.n==0)
     {
           printf("stack underflow");
           exit(1);
     }
     else
     {
           s.n--;
           return s.stk[s.n];
     }
}
int prcd(char op)
{
    if(op=='^')
                return 3;
    else if(op=='*'||op=='/'||op=='%')
               return 2;
    else if(op=='+'||op=='-')
               return 1;
    else
               return 0;
}

int isop(char op)
{
    if(op=='*'||op=='/'||op=='+'||op=='-'||op=='%'||op=='^')
    return 1;
    else
    return 0;
}

main()
{
      char op,in[20],post[20];
      int i,j;
      stack s;
      printf("enter the infix exp.\t");
      scanf("%s",in);
      strcat(in,")");
      clear(&s);
      push(&s,'(');
      for(i=0,j=0;in[i]!='\0';i++)
      {
                              if(in[i]=='(')
                              push(&s,in[i]);
                              else if(isop(in[i])>0 )
                              {
                                   while(prcd(get(s))>=prcd(in[i]))
                                   {
                                                 post[j]=pop(&s);
                                                 j++; 
                                   }
                                   push(&s,in[i]);
                              }
                              else if(in[i]>47&&in[i]<59)
                              {
                                   post[j]=in[i];
                                   j++;
                              }
                              else
                              {
                                    while((op=pop(&s))!='(')
                                    {
                                         post[j]=op;
                                         j++;
                                    }
                              }
      }
                              post[j]='\0';     
                              printf("\nequivalent postfix exp. is  %s",post);
getch();
}  
