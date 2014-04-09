#include<stdio.h>
#include<math.h>
#include<stdbool.h>
 bool a[10000001];
int prime()
{ 
      int m,i,j,n,t,k=2,l;
      n=10000000;
       for(l=0;l<=10000000;l++)
          a[l]=0;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}} 
                                       
           return 0;}
main()
{  
    long long int n,t,i,sum=0,k;
    t=prime();  
                  n=1;   
    while(n++<1000000)
    {
    if(n<4&&a[sum+1+n]==0)
    printf("%d\n",n);
    else{
     k =(sqrt(n));
    for(i = 2;i<=k;i++)
    {
          if (n % i == 0){
            if(i*k==n)
            sum=sum + i ;
            else
            sum = sum + i +( n / i);}
            }if(a[sum+1+n]==0)
            {
            printf("%lld\t%f\n",n,sqrt(n));}
    }sum=0;
    }
    getch();
}
 
