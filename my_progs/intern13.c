#include<stdio.h>
char s[201];
int A,B;
int f(int i,int j,int a,int b)
{
    int x=a,y=b,m1,m2;
    if(i==j)
    {
            if(s[i]==1)
            {
                       if(A==1||B==1)
                       return 1;
                       else{
                            A=1;
                       return 2;
                       }
                       }
            else
            {
                if(A==0||B==0)
                return 1;
                else{     
                     A=0;
                     return 2;
            }
            }
            }
            else if(j==i+1)
            {
                 if(s[i]==0&&s[j]==1)
                 {
              if(A==0&&B==1)
              return 1;
              if(A==0&&B==0)              
              {         
              B=1;
              return 2;
               }
               if(A==1&&B==0)
               return 2;
               if(A==1&&B==1){
                    A=0;     
                   return 2;  
                   } }
                   else if(s[i]==0&&s[j]==0)
                 {
              if(A==0&&B==0)
              return 1;
              if(A==0&&B==1)              
              {         
              B=0;
              return 2;
               }
               if(A==1&&B==0){
                              A=0;
               return 2;}
               if(A==1&&B==1){
                    A=0;B=0;
                   return 3;  
                   } }
                    else if(s[i]==1&&s[j]==1)
                 { 
              if(A==1&&B==1)
              return 1;
              if(A==0&&B==1)              
              {         
              A=1;
              return 2;
               }
               if(A==1&&B==0){
                              B=1;
               return 2;}
               if(A==0&&B==0){
                             
                    A=1;B=1;
                   return 3;  
                   } }
                    else
                 {
             if(A==1&&B==0)
              return 1;
              if(A==0&&B==0)              
              {         
              A=1;
              return 2;
               }
               if(A==0&&B==1)
               return 2;
               if(A==1&&B==1){
                    B=0;     
                   return 2;  
                   }
                 }
                 }
            else{
    m1=f(i,i+1,A,B)+f(i+2,j,A,B);
    // printf("%d %d\n",A,B);
    A=x;B=y;
    m2=f(i,i,A,B)+f(i+1,j,A,B);
   //  printf("%d %d\n",A,B);
   // printf("%d %d \n",m1,m2);
    if(m1<m2)
    return m1;
    else
    return m2;
    }
}
main()
{
      int t,i,l;
      scanf("%d",&t);
      while(t--)
       {
         scanf("%s",s);
         A=0,B=0;
         l=strlen(s);
         for(i=0;i<l;i++)
        s[i]=s[i]-48;
         printf("%d\n",f(0,l-1,0,0));
       }
       return 0;
       }
                

