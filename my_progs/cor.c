#include<stdio.h>
int c[5001];
main()
{
    int count=0,a[500001],n=500000,i,j;
    freopen("in.txt","r",stdin);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]>=2500&&a[i]+a[j]<=4000)
           {
                c[a[i]+a[j]]=1;
        }
    }
    }
    for(i=2500;i<=4000;i++)
    if(c[i])
    count++;
    printf("%d\n",count);
    scanf("%d",&n);
    return 0;
}
