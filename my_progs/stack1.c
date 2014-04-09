#include<stdio.h>
#define SIZE 10
typedef struct
{
        char stk[SIZE][20];
        int n;
}stack1;
void clear(stack1 *s)
{
             s->n=0;
}
void push(stack1 *s,char* val)
{
     if(s->n==SIZE)
     {
           printf("stack overflow");
           exit(1);
     }
     else
           strcpy(s->stk[s->n++],val);
}
char *pop(stack1 *s)
{
     if(s->n==0)
     {
           printf("stack underflow");
           exit(1);
     }
     else
           return s->stk[--s->n];
} 

           
                 
