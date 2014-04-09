#include<stdio.h>
int a[1000001];
main()
{
      int i,j,n,m,ana,p,q,flag,t;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&n,&ana);
                flag=0;
                for(i=1;i<=n;i++)
                a[i]=n-i;
                for(i=0;i<ana;i++)
                {scanf("%d%d",&p,&q);
                  a[p]--;
                  a[q]++;
                  }
                  for(i=n;i>=1;i--)
                  { if(a[i]==0)
                    {   flag=1;
                         m=i;
                         break;
                               }}
                               if(flag)
                               printf("2 %d\n",m);
                               else
                               printf("1\n");
                               }
                               return 0;
                               }
                               
                  
                
                
                
                
