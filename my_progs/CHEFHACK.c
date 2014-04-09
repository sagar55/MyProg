
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool a[10000002]={1,1},c[350][350];
int d[10000001],b[350][350],nn;
f(){
    
int m,i,j,n,t,k=2,l,count=0;
n=10000001;
       for(l=2;l<=n;l++)
          a[l]=0;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
                                 for(i=2;i<n;i++)
                                 if(!a[i])
                                 d[i]=count++;
                                 
          }
          
          fun(int i,int j)
          {
                  if((i-1)>=0&&!(b[i-1][j]%2)&&a[b[i-1][j]]&&!c[i-1][j])  { c[i-1][j]=1;
                  if((i-1)>=0)
                  fun(i-1,j);
                  }
                 if((j-1)>=0&&!(b[i][j-1]%2)&&a[b[i][j-1]]&&!c[i][j-1])  {   c[i][j-1]=1;
                 if((j-1)>=0)
                  fun(i,j-1);
                  }
                  if((j+1)<nn&&!(b[i][j+1]%2)&&a[b[i][j+1]]&&!c[i][j+1])   {   c[i][j+1]=1;
                  if((j+1)<nn)
                  fun(i,j+1);}
                    if((i+1)<nn&&!(b[i+1][j]%2)&&a[b[i+1][j]]&&!c[i+1][j]) {       c[i+1][j]=1;
                  if((i+1)<nn)
                  fun(i+1,j);
                   }
                    }
                     fun1(int i,int j)
          {
                      if((i-1)>=0&&b[i-1][j]%2&&a[b[i-1][j]]&&!c[i-1][j]) {  c[i-1][j]=1;
                      if((i-1)>=0)
                  fun1(i-1,j);
                  }
                       if((j-1)>=0&&b[i][j-1]%2&&a[b[i][j-1]]&&!c[i][j-1]) {   c[i][j-1]=1;
                  if((j-1)>=0)
                  fun1(i,j-1);
                  }
                 if((j+1)<nn&&b[i][j+1]%2&&a[b[i][j+1]]&&!c[i][j+1])    {  c[i][j+1]=1;
                  if((j+1)<nn)
                  fun1(i,j+1);}
                      if((i+1)<nn&&b[i+1][j]%2&&a[b[i+1][j]]&&!c[i+1][j])  {      c[i+1][j]=1; 
                  if((i+1)<nn)
                  fun1(i+1,j);
                   }
                   } 
main()
{
      int t,j,i;
      long long int count;
      f();
      scanf("%d",&t);
      while(t--)
      {
                count=0;
                scanf("%d",&nn);
                for(i=0;i<nn;i++)
                 for(j=0;j<nn;j++)
                 {
                scanf("%d",&b[i][j]);
                c[i][j]=0;}
                 for(i=0;i<nn;i++)
                   for(j=0;j<nn;j++)
                   {
                 if(!a[b[i][j]]&&!c[i][j])
                  {      count+=d[b[i][j]];
                    c[i][j]=1;
                    // printf("1. %d\n",count);
                    }
                 else if(b[i][j]%2==0&&!c[i][j])
                 {
                      count+=b[i][j]/2;
                       c[i][j]=1;
                      fun(i,j);
                     
                       //printf("2.%d %d %d\n",i,j,count);
                           }
                               else if(!c[i][j]){
                               count+=b[i][j]/2+2;
                                c[i][j]=1;
                      fun1(i,j);      
                     
                      // printf("3.%d %d %d\n",i,j,count);
                       }
                       // printf("%d::\n ",c[1][1]);
                        
                       }
                       printf("%lld\n",count);
                       }
                               return 0;
                               }
                               
                  
                               
                 
