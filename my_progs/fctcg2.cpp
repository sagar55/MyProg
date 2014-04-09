#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int c[]={2,4,9,16,25,64,289,729,1681,2401,3481,4096,5041,7921,10201,15625,17161,27889,28561,29929,65536,83521,85849,146689,262144,279841,458329,491401,531441,552049,579121,597529,683929,703921,707281,734449,829921};                              
main()
{
      int t,i,count,m,n;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&m,&n);
                count=0;
               for(i=0;i<37;i++)
               {
                                if(c[i]>=m&&c[i]<=n)
                                   count++;
                                   if(c[i]>n)
                                    break;
                }
                printf("%d\n",count);
                }
    
return 0;     
      }
