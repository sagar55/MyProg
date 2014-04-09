#include<stdio.h>
long long int count=0;
void merge_sort(int a[],int low,long long int high)
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

merge(int a[],int low,long long int high,int mid)
{
          int i=low,k=low,c[100001];
          long long int j=mid+1;
          while(i<=mid&&j<=high)
          {
                         if(a[i]<a[j])
                         {
                                      c[k]=a[i];
                                        count=count+(high-j+1)*a[i];  
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
          if(i<=mid)
          {
          while(i<=mid)
          {
                       c[k]=a[i];
                       i++;
                       k++;

          }
          }
          if(j<=high){
          while(j<=high)
          {
                        c[k]=a[j];
                        j++;
                        k++;
          }}
          for(i=low;i<k;i++)
                     a[i]=c[i];
}          
main()
{
      int a[100001],j,t;
      long long int i;
      
       scanf("%d",&t);while(t--){
      scanf("%lld",&i);
       count=0;
      for(j=0;j<i;j++)
      scanf("%d",&a[j]);
      merge_sort(a,0,i-1);
      printf("%lld\n",count);}
getch();
      }
      
                                                      
                                      
                  
                  
