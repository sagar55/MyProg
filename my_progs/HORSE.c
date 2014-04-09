#include<stdio.h>
void sort(int a[],int low,int high)
{
     int mid;
     if(low<high)
     {
                 mid=(low+high)/2;
                 sort(a,low,mid);
                 sort(a,mid+1,high);
                 merge(a,low,mid,high);
     }
}

merge(int a[],int low,int mid,int high)
{
          int i=low,j=mid+1,k=low,c[5001];
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
     int a[5001],n,t,i,j,min;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                sort(a,0,n-1);
                min=a[1]-a[0];
                for(i=2;i<n;i++)
                {
                    j=a[i]-a[i-1];
                    if(j<min)
                    min=j;
                    }
                    printf("%d\n",min);
                    }
                    return 0;
      }
                                                      
                                      
                  
                  
