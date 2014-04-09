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
      int a[1000],i,j=0,sum=0,s,t,count=0;
      scanf("%d%d%d",&i,&s,&t);
      s=s*t;
      for(j=0;j<i;j++)
      scanf("%d",&a[j]);
      merge_sort(a,0,i-1);
      j=i-1;
      while(sum<s&&j>=0){
      sum=sum+a[j];
      j--;
      count++;}
      printf("%d",count);
      getch();
      }
                                                      
                                      
                  
                  
