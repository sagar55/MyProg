#include<stdio.h>
 int a[2000001];
main()
{
     int b[1001],n,m,t,i,j,p,q,count,temp,l,h;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d%d",&n,&l,&h);
                for(i=0;i<n;i++)
                scanf("%d",&b[i]);
                // printf("hi1\n");
                for(i=0;i<2000001;i++)
                a[i]=0;
               // printf("hi\n");
                count=0;
                for(i=0;i<n;i++)
                 for(j=i;j<n;j++)
                  a[b[i]+b[j]]++;
                //  printf("hi\n");
                  for(i=0;i<n;i++)
                    {
                     p=h-b[i];
                     q=l-b[i];
                    printf("%d  %d\n",q,p);
                    while(q<=p)
                    {
                     temp=q;
                     
                     if(a[temp]>0)
                   { printf("2:%d %d\n",q,p);  count+=a[temp];
                            }
                     q++;
                     }
                     }
                     printf("%d",count);}
                     return 0;
                     }
                               
                                  
                
