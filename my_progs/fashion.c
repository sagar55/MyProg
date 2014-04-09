#include<stdio.h>
void merge_sort(int a[],int low,int high)
{
     int mid;
     if(low<high)
     {
                 mid=(low+high)/2;
                 merge_sort(a,low,mid);
                 merge_sort(a,mid+1,high);
                 merge(a,low,high,mid);
     }
}

merge(int a[],int low,int high,int mid)
{
          int i=low,j=mid+1,k=low,c[1000];
          while(i<=mid&&j<=high)
          {
                         if(a[i]<a[j])
                         {
                                      c[k]=a[i];
                                      i++;
                                      k++;
                         }
                         else
                         {
                                      c[k]=a[j];
                                      j++;
                                      k++;
                         }
          }
          while(i<=mid)
          {
                       c[k]=a[i];
                       i++;
                       k++;
          }
          while(j<=high)
          {
                        c[k]=a[j];
                        j++;
                        k++;
          }
          for(i=low;i<k;i++)
                     a[i]=c[i];
}          
main()
{
      int t,n,a[1000],b[1000],i,sum;
      scanf("%d",&t);
      while(t)
      {
              sum=0;
              scanf("%d",&n);
              for(i=0;i<n;i++)
               scanf("%d",&a[i]);
               for(i=0;i<n;i++)
               scanf("%d",&b[i]);
                 merge_sort(a,0,n-1);
                  merge_sort(b,0,n-1);
                 for(i=0;i<n;i++)
                   sum=sum+a[i]*b[i];
                   printf("%d\n",sum);
                   t--;
                   }
                   getch();
                   }
                  
               
      
