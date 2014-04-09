#include<stdio.h>
int ret,min;
char *sub;
struct Q
{
        int n;
        char c[16];
        struct Q *q1;
        };
struct Q s[100001];
insert(int p,int pos,char name[])
{
          struct Q  *temp1,*temp2;
           temp1=s[p].q1;
           temp2=(struct Q*)malloc(sizeof(struct Q));
          s[p].q1 =temp2;
           if(p!=min)
           s[p].n=min;
           temp2->n=pos;
        strcpy(temp2->c,name);
        temp2->q1=temp1;
      temp2='\0';
      temp1='\0';
           free(temp2);
           free(temp1);
           }
delete(int p)           
{
         
           struct Q *temp1;
           temp1=s[p].q1;
            s[p].q1=temp1->q1;
           if(temp1->q1=='\0')
           min=s[p].n;
           else
           min=p;
          ret=temp1->n;
          sub=temp1->c;    
           temp1->q1='\0';
           temp1='\0';
         free(temp1);  
           }
             
main()
{
      int n,t,i,tn=0,pos=1,ans1;
      char ss[16];
      scanf("%d",&t);
      for(i=0;i<100001;i++)
      s[i].q1='\0';
      min=100001;
      while(t--)
      {
                struct Q *temp;          
                scanf("%d",&i);
               if(i!=-1){
                          scanf("%s",ss);
                             if(i<=min&&i!=0)
                {
                          insert(i,pos,ss);
                          min=i;  
                          }
                          if(i!=0){
                           tn++;
                            pos++; }      
               }
               else
               {
               delete(min);
               ans1=tn-ret;
               tn=ret-1;
               pos=tn+1;
              printf("%d %s\n",ans1,sub);
               }
               }
               return 0;
               } 
                  
