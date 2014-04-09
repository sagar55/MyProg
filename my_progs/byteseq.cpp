#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int p,q,min,max;
int merge(int a[],int low,int mid,int high,int *min,int *max)
{
          int i=low,j=mid+1,k=0,c[201],count=0;
                 *min=1000000001;
                 *max=0;
          while(i<=mid&&j<=high)
          {
                         if(a[i]<=a[j])
                         {
                                      if(a[i]>=p&&a[i]<=q){
                                      count++;
                                      c[k++]=count;
                                      }
                                      i++;
                                      
                         }
                         else
                         {
                                      if(a[j]>=p&&a[j]<=q){
                                      count--;
                                       c[k++]=count;}j++;
                         }
          }
          while(i<=mid)
          {
                      if(a[i]>=p&&a[i]<=q){
                       count++;
                         c[k++]=count;} i++;
          }
          while(j<=high)
          {
                        if(a[j]>=p&&a[j]<=q){
                        count--;
                          c[k++]=count;}j++;
          }
          for(i=0;i<k;i++)
          { if(c[i]>*max)
             *max=c[i];
             if(c[i]<*min&&c[i]>=0)
             *min=c[i];}
}          
main()
{
     int t,n,j,a[201],min,max;
 t=10;
      while(t--)
      {
                scanf("%d%d",&p,&q);
                scanf("%d",&n);
      for(j=0;j<n;j++)
      scanf("%d%d",&a[j],&a[j+n]);
      sort(a,a+n);
      sort(a+n,a+2*n);
      min=1000000001;
      max=0;
      merge(a,0,n-1,2*n-1,&min,&max);
      printf("%d %d\n",min,max);}
     return 0;
      }
                                                      
                                      
                  
                  
