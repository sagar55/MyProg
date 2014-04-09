#include<stdio.h>
int great(int i,int j)
{return (i>j)?i:j;}
main()
{
      int p=0,n,max,sum=0,sum1=0,i,a[300001];
      scanf("%d%d",&n,&max);
      for(i=0;i<n;i++)
      {scanf("%d",&a[i]);
              sum=sum+a[i];
                    while(sum>max)
                    {
                                   sum-=a[p];
                                   p++;
                                   }
                                   sum1=great(sum1,sum);
                                   }
                                   printf("%d\n",sum1);
                                   getch();
                                   }
                    
      
