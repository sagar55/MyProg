#include<stdio.h>
main()
{
      int i,n,g,m,t,max1,max2;
      scanf("%d",&t);
      while(t--)
      {
                 max1=0;
                 max2=0;
                 scanf("%d%d",&g,&m);
                 for(i=0;i<g;i++)
                 {
                 scanf("%d",&n);
                 if(n>max1)
                 max1=n;
                 }
                 for(i=0;i<m;i++)
                 {
                 scanf("%d",&n);
                 if(n>max2)
                 max2=n;
                 }
                 if(max1>max2||max1==max2)
                 printf("Godzilla\n");
                 else
                 printf("MechaGodzilla\n");
                 }
                 return 0;
                 }
