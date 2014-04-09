#include<stdio.h>
#include<stdbool.h>
int b[500002]={0},r;
bool c[10000000]={0};
int a(int m)
{
    if(m==0)
    return 0;
    else if(b[m]!=0)
    return b[m];
    else
    {
         r=a(m-1);
         if(c[r-m]==0&&(r-m)>0)
         {b[m]=r-m;
         c[r-m]++;
         return b[m];}
         else{
         b[m]=r+m;
         c[r+m]++;
         return b[m];
         }}
         }
         main()
         {
               int m,i;
               for(i=10000;i<=100000;i=i+10000)
               a(i);
               for(i=100001;i<=500000;i=i+50000)
               a(i);
                 scanf("%d",&m);
               while(m!=-1)
               {
                           printf("%d\n",a(m));
                            scanf("%d",&m);
                            }
                            return 0;
                            }
