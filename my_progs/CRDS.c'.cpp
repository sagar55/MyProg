#include<stdio.h>
        main()
        {
        int n,t,x,temp,carry;
        int a[30],i,j;long long int m;
        scanf("%d",&n);
        while(n-->0)
        {scanf("%d",&t);
        i=3*t+1;x=0,temp=0;carry=0,m=0;
        if(t%2==0)t=t/2;
        else i=i/2;
      while(i!=0)
      {a[x++]=i%10;i=i/10;
                 }
                   for(j=0;j<x;j++)
                   { temp=a[j]*t+carry;
                   a[j]=temp%10;
                   carry=temp/10;}
                   while(carry!=0){a[j++]=carry%10;carry=carry/10;
                                   } for(x=j-1;x>=0;x--)m=m*10+a[x];
                                   m=m%1000007;printf("%lld\n",m);  
        }
        return 0;
        }
    
