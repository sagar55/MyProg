#include<stdio.h>
main()
{
    int n,k,i,f;
    scanf("%d%d",&n,&k);
    while(n!=0&&k!=0)
    {for(f=0,i=1;i<n;i++)
     f=(f+k)%(i+1);
     printf("%d %d %d\n",n,k,f+1);
       scanf("%d%d",&n,&k);
       }
       return 0;
       }

