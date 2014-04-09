#include<stdio.h>
main()
{
      int t,a[100001][2],n,i,j,k,ans;
      char s[10];
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
      scanf("%s",s);
      if(s[0]=='d')
      {
      a[i][0]=0;
       a[i][1]=1;
       }
       else
       {
       scanf("%d",&j);
       a[i][0]=j;
       a[i][1]=1;
          }
          }
          ans=0;
          for(i=n;i>=1;i--){
                            if(a[i][0]&&a[i][1])
                            a[a[i][0]][1]=0;
                            if(a[i][1])
                            ans++;
          }
       
          printf("%d\n",ans);
           for(i=1;i<=n;i++)
          if(a[i][1])
            printf("%d ",i);
            printf("\n");
          }
           return 0;
          }
          
       
       
       
       
       
      
