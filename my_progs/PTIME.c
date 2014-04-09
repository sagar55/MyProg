#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int f(int n,int k)
{
    int sum=0;
    while(n>=1)
    {
               sum=sum+n/k;
               n/=k;
               }
               return sum;
               }
main()
{
      int m,i,j,n,t,k=2,l,b[10000],count;
      bool a[10001];
       for(l=0;l<=10000;l++)
          a[l]=0;
       m=sqrt(10000);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=10000)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
      while(scanf("%d",&n)!=EOF)
      {count=0;
            for(i=2;i<=n;i++)
            { if(a[i]==0)
              count++;
              }                    
       for(i=2;i<=n;i++)
       {
             if(a[i]==0&&(--count))
             {
               printf("%d^%d * ",i,f(n,i));    
                }
             if(a[i]==0&&count==0)
             {
                printf("%d^%d\n",i,f(n,i));  
                   }                                                                        
                                }
                                }            
getch();
}                                 
                                 
      
