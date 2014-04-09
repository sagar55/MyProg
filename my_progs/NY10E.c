#include<stdio.h>
main()
{
  int t,m,i,p;
  long long int s;
  scanf("%d",&t);
  while(t-->0)
  {
              s=1;
              scanf("%d%d",&p,&m);
           if(m<10)
              {
                      for(i=10;i<=9+m;i++)
                      s*=i;
                      for(i=2;i<=m;i++)
                      s/=i;
                      }
              else
              {
                  for(i=m+1;i<=m+9;i++)
                  s*=i; 
                  for(i=2;i<=9;i++)
                  s/=i;
              }printf("%d ",p);
              printf("%lld\n",s);
              }
      return 0;
      }

