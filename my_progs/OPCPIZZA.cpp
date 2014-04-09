#include<stdio.h>
#include <algorithm>
using namespace std;
main()
{
      int a[100001],i,j,n,count=0,k,t;
      scanf("%d",&t);
      while(t--){
                 count=0;
      scanf("%d%d",&n,&k);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      sort(a,a+n);
      for(i=0;i<n-1;i++)
      {
               j=k-a[i];
      if (binary_search (a+i+1,a+n,j))
       count++;
       }
       printf("%d\n",count);}
       return 0;
       }       
      
