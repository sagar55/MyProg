#include<stdio.h>
#include<vector>
using namespace std;
int great(int i,int j)
{return (i>j)?i:j;}
main()
{
      int p=0,n,max,sum,sum1=0,i,q;
      vector<int> a;
      scanf("%d%d",&n,&max);
      for(i=0;i<n;i++)
      {scanf("%d",&q);
      a.push_back(q);
              sum=sum+a[i];
                    while(sum>max)
                    {
                                   sum-=a[p];
                                   p++;
                                   }
                                   sum1=great(sum1,sum);
                                   }
                                   printf("%d\n",sum1);
                                   scanf("%d",&n);
                                   return 0;
                                   }
                    
      
