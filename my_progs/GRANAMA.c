#include<stdio.h>
main()
{
      int a[26],b[26],i,t,flag1,flag2;
      char p[1001],q[1001];
      scanf("%d",&t);
      while(t--)
      {
                flag1=0;
                flag2=0;
                scanf("%s%s",p,q);
                for(i=0;i<26;i++)
                { a[i]=0;b[i]=0;}
                 for(i=0;i<strlen(p);i++)
                 a[p[i]-97]++;
                  for(i=0;i<strlen(q);i++)
                 b[q[i]-97]++;
                  for(i=0;i<26;i++)
                  {
                   if(a[i]!=b[i])
                  flag2=1;
                   if((a[i]==0&&b[i]>0)||(b[i]==0&&a[i]>0))
                   flag1=1;
                   }
                   if(flag1==flag2)
                   printf("YES\n");
                   else
                   printf("NO\n");
                   }
                   return 0;
                   }
