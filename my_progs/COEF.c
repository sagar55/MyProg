#include<stdio.h>
main()
{
int a,b,i,n,j;
long long int mul;
while(scanf("%d %d",&a,&b)!=EOF){
                               mul=1;
                               for(i=0;i<b;i++)
                               {
                                               scanf("%d",&n);
                                               if(n)
                                               {
                                                     if(n>a/2)
                                                     {for(j=n+1;j<=a;j++)
                                                    { mul*=j;printf("1 %d\n",mul);}
                                                     for(j=2;j<=a-n;j++)
                                                     {mul/=j;printf("2 %d\n",mul);}
                                                     }
                                                     else
                                                     {for(j=a-n+1;j<=a;j++)
                                                     {mul*=j;printf("3 %d\n",mul);}
                                                     for(j=2;j<=n;j++)
                                                    {mul/=j;printf("4 %d\n",mul);}}
                                                     a=a-n;
                                                     }
                                                }
                                               printf("%lld\n",mul);}
                return 0;
      }


