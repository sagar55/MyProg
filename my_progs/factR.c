#include<stdio.h>
void merge_sort(char a[],int low,int high)
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

merge(char a[],int low,int high,int mid)
{
          int i=low,j=mid+1,k=low;
          char c[50];
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
      int t,i,j,count,k=1;
      long long int m,f;
      char s[15];
      scanf("%d",&t);
      while(t)
      {
              i=1;
                      m=1;
                      count=1;
      scanf("%s",s);
      merge_sort(s,0,(strlen(s))-1);
      for(j=strlen(s);j>0;j--)
        m=m*j;
         while(i<strlen(s))
          {                count=1;
                           while((s[i]==s[i-1]))
                           {i++;
                             count++;
                             }
                             f=1;
                           for(j=count;j>0;j--)
                               f=f*j;
                            m=m/f;  
                             i++;}
       t--;
       printf("Case %d: %lld\n",k,m);   
       k++;                   
       }
      getch();
      }
