 #include<stdio.h>
 #include<algorithm>
 using namespace std;
 main()
 {
       int i,j,k,t,n,m,a[101],ans,p;
       scanf("%d",&t);
       while(t--)
       {
                 scanf("%d",&n);
                 for(i=0;i<n;i++)
                 scanf("%d",&a[i]);
          sort(a,a+n);
          ans=0;
          for(i=n-1;i>0;i--)
       {
       p=a[i]-a[0];
       ans+=p;
       //a[i-1]+=ans;
       //a[0]+=p;
       for(k=0;k<n;k++)
       a[k]=a[k]+p;
       }
       printf("%d\n",ans);
       }
       return 0;
       }
       //1 2 3 4
       //4 5 6 4
       //6 7 6 6
                 
                 
