#include<stdio.h>
main()
{
      int t,i,j,n,sum,flag;
      scanf("%d",&t);
      while(t--)
      {
                sum=0;
                flag=0;
                scanf("%d%d",&i,&j);
                while(i--)
                {
                          scanf("%d",&n);
                          sum=sum+n;
                          if(sum>j)
                          {
                                   flag=1;
                                   break;
                                   }
                          }
                          if(flag==1){
                          while(i--)
                          scanf("%d",&n);}
                          if(flag==0)
                          printf("Yes\n");
                          else
                           printf("No\n");
                          }
                          return 0;
                          }