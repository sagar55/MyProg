//implementation of stack using linked list
typedef struct stack
{
        int val;
        struct stack *next;
        }stack;
        
stack* getnode(int n)
{
       stack *temp=(stack*)malloc(sizeof(stack));
       temp->next='\0';
       temp->val=n;
       return(temp);
       }        
        
        
stack* push(stack *s,int n)
{
        stack *t=getnode(n);
        t->next=s;
        s=t;
        return(s);
        }
        
stack* pop(stack *s,int *x)
{      x=s->val;
       s=s->next;
       return(s);
       }
int get(stack *s)
{
     return(s->val);
     }

main()
{     stack *s;
      int n,val;
      while(1)
      {        n=12;
                printf("\n1.push\n2.pop\n3.get\n4.exit");
                printf("enter the command\t");
                scanf("%d",&n);
                if(n==1)
                {printf("enter the value to be inserted\t");
                scanf("%d",&val);
                s=push(s,val);}
                else if(n==2)
                {            s=pop(s,&val);
                             printf("poped element %d",val);}
                else if(n==3)
                {printf("\n%d",get(s));}
                else if(n==4)
                {break;}
                else
                {printf("invalid input");}
                }
                getch();}
     
            

        





