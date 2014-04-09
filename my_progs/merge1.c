#include<stdio.h>
long long int count=0;
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
          int i=low,j=mid+1,k=low,c[200000];
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
                                      count++;
                                      count=count+(mid-i);
                         }
          }
          if(i<=mid)
          {
          while(i<=mid)
          {
                       c[k]=a[i];
                       i++;
                       k++;

          }
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
      int a[200000],i,j,t;
       scanf("%d",&t);
       while(t--){
       scanf("%d",&i);
       count=0;
      for(j=0;j<i;j++)
      scanf("%d",&a[j]);
      merge_sort(a,0,i-1);
      printf("%lld\n",count);}
      return 0;
      }
      
                                                      
                                      
                  
                  

