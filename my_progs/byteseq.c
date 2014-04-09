#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
merge(int a[],int low,int mid,int high)
{
          int i=low,j=mid+1,k=0,max=0,c[201],count=0;
          while(i<=mid&&j<=high)
          {
                         if(a[i]<a[j])
                         {
                                      i++;
                                      count++;
                                      c[k++]=count;
                                      printf(":%d \n",count);
                                      
                         }
                         else
                         {
                                      j++;
                                      count--;
                                       c[k++]=count;
                                     printf(":-%d \n",count);
                         }
          }
          while(i<=mid)
          {
                       i++;
                       count++;
                         c[k++]=count;
                         printf("::%d \n",count);
          }
          while(j<=high)
          {
                        j++;
                        count--;
                          c[k++]=count;
                          printf("::-%d \n",count);
          }
          for(i=0;i<k;i++)
          { if(c[i]>max)
             max=c[i];}
             return max;
}          
main()
{
     int t,n,j,a[201];
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
      for(j=0;j<n;j++)
      scanf("%d%d",&a[j],&a[j+n]);
      sort(a,a+n);
      sort(a+n,a+2*n);
      printf("%d\n",merge(a,0,n-1,2*n-1));}
      getch();
      }
                                                      
                                      
                  
                  
