#include<stdio.h>
main()
{
int t;
long long int n;
double sum,x,y;
scanf("%d",&t);
while(t-->0)
{
            scanf("%lld",&n);
            sum=2.0000/3;
            x=n*1.00000000000;
            if(n==1)
            printf("%.11f\n",sum);
            else
            {
                sum+=(1.00000000000/12.0000000)-(1.00000000000/(2.00000000000*(x+1)*(x+2)));
                printf("%.11f\n",sum);
            }
            }
            return 0;
            }

