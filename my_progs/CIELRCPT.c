#include<stdio.h>
main()
{
      int a[2050],i,j,n,t,k;
      a[0]=0;
      for(i=1;i<2049;i++)
      { if((i&(i-1))==0)
        a[i]=1;
        else
        {j=log2(i);
        k=pow(2,j);
        a[i]=a[i-k]+1;}
        }
        scanf("%d",&t);
        while(t--)
        {scanf("%d",&n);i=0;
        if((n&(n-1))==0&&(n>2048))
        i=n/2048;
        else{
        i=0;
        j=log2(n);
        k=pow(2,j);
        while(n>2048)
        {  i=i+k/2048;
           n=n-k;
           j=log2(n);
           k=pow(2,j);
           }
           i=i+a[n];}
           printf("%d\n",i);
           }
           return 0;
           }
               
        
        
