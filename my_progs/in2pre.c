//infix to prefix conversion
#include<stdio.h>
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
      char in[20],pre[20],pre1[20],op;
      int i,j=0,n;
      stack s;
      clear(&s);
      printf("enter infix exp.\t");
      scanf("%s",in);
      n=strlen(in);
      push(&s,')');
      for(i=n-1;i>=0;i--)
      {
            if(in[i]>47&&in[i]<59)
              {
                   pre[j]=in[i];
                   j++;
              }  
             else if(in[i]==')')
                        push(&s,in[i]);
             else if(isop(in[i])>0)
             {
                                   while(prcd(get(s))>=prcd(in[i]))
                                   {
                                                 pre[j]=pop(&s);
                                                 j++; 
                                   }
                                   push(&s,in[i]);
             }                  
             else
               {
                    while((op=pop(&s))!=')')
                    {
                           pre[j]=op;
                           j++;
                    }
               }
      }
             while((op=pop(&s))!=')')  
             {
                           pre[j]=op;
                           j++;
             }          
       pre[j]='\0';
       n=strlen(pre);
       for(j=0,i=n-1;i>=0;i--,j++)
       pre1[j]=pre[i];
       pre1[n]='\0';
       printf("Its equivalent prefix exp. is %s",pre1);          
       getch();
}   
                             
                             
