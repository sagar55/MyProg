//postfix to infix conversion
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


main()
{
      char in[20],post[20],op[2],val1[20],val2[20];
      int i;
      stack1 s;
      clear(&s);
      printf("enter the postfix exp.\t");
      scanf("%s",post);
      for(i=0;post[i]!='\0';i++)
      {
          op[0]=post[i];
          op[1]='\0';
          if(post[i]>47&&post[i]<59)
              push(&s,op);
          else
          {
              strcpy(val2,pop(&s));
              strcpy(val1,pop(&s));
              strcpy(in,"(");
              strcat(in,val1);
              strcat(in,op);
              strcat(in,val2);
              strcat(in,")");
              push(&s,in);
          }
      }
      strcpy(in,pop(&s));
      printf("Its equivalent infix exp. is %s",in);
getch();
}
              
              
                  
  
