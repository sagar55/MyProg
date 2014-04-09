#include<stdio.h>
#define N 10005
long long int a[N];
int n;
#define max(a,b)    ((a)>(b)?(a):(b))
#define min(a,b)    ((a)<(b)?(a):(b))
#define abS(x)		((x)<0?-(x):(x))

solve()
{
int i;
        long long int MX[N],MN[N],TP[N],TN[N];
    long long int MX2[N],MN2[N],TP2[N],TN2[N];
    MX[0]=a[0];
    MN[0]=a[0];
    TP[0]=a[0];
    TN[0]=a[0];
    MX2[n-1]=a[n-1];
    MN2[n-1]=a[n-1];
    TP2[n-1]=a[n-1];
    TN2[n-1]=a[n-1];
    for(i=1;i<n-1;i++)
    {
        if(a[i]==0)
        {
            if(TP[i-1]<0)
             TP[i]=a[i];
            else
             TP[i]=TP[i-1];
            if(TN[i-1]>0)
             TN[i]=a[i];
            else
             TN[i]=TN[i-1]; 
        }
        else if(a[i]>0)
        {
            if(TP[i-1]<0)
                TP[i]=a[i];
            else
                TP[i]=TP[i-1]+a[i];
                 if(a[i]<TN[i-1])
                TN[i]=a[i];
                else
            TN[i]=TN[i-1]+a[i];
        }
        else 
        {   
            if(TN[i-1]>0)
                TN[i]=a[i];
            else
                TN[i]=TN[i-1]+a[i];
                if(a[i]>TP[i-1])
                TP[i]=a[i];
                else
            TP[i]=TP[i-1]+a[i];
        }
        MX[i]=max(MX[i-1],TP[i]);
        MN[i]=min(MN[i-1],TN[i]);
     // printf("%lld %lld %lld %lld \n",MX[i],MN[i],TP[i],TN[i]);
    }
    for(i=n-2;i>0;i--)
    {
        if(a[i]==0)
        {
            if(TP2[i+1]<0)
             TP2[i]=a[i];
             else
             TP2[i]=TP2[i+1];
             if(TN2[i+1]>0)
             TN2[i]=a[i];
             else
             TN2[i]=TN2[i+1];
        }
        else if(a[i]>0)
        {
            if(TP2[i+1]<0)
                TP2[i]=a[i];
           else
                TP2[i]=TP2[i+1]+a[i];
                if(a[i]<TN2[i+1])
                TN2[i]=a[i];
                else
            TN2[i]=TN2[i+1]+a[i];
        }
        else 
        {   
            if(TN2[i+1]>0)
                TN2[i]=a[i];
            else
                TN2[i]=TN2[i+1]+a[i];
                if(a[i]>TP2[i+1])
                TP2[i]=a[i];
                else
            TP2[i]=TP2[i+1]+a[i];
        }
        MX2[i]=max(MX2[i+1],TP2[i]);
        MN2[i]=min(MN2[i+1],TN2[i]);
     //   printf("::%lld %lld %lld %lld \n",MX2[i],MN2[i],TP2[i],TN2[i]);
    }
    long long int ans=0;
    for(i=0;i<n-1;i++)
    ans=max(ans,max(abS(MX[i]-MN2[i+1]),abS(MN[i]-MX2[i+1])));
     printf("%lld\n",ans);
}
 
main()
{
           int t,i;
           scanf("%d",&t);
           while(t--)
           {
            scanf("%d",&n);
            for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
            solve();
         
           }
            return 0;
}    
