#include<string.h>
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

int merge(int a[],int low,int high,int mid)
{
          int i=low,j=mid+1,k=low;
          int c[100];
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

merge1(int a[],int b[],int c[],int n,int m)
{
          int i=0,j=0,k=0,p=n,q=m;
          while(i<p&&j<q)
          {
                         if(a[i]<b[j])
                         {
                                      c[k]=a[i];
                                      i++;
                         }
                         else if(a[i]>b[j])
                         {
                                      c[k]=b[j];
                                      j++;
                         }
                         else{
                         c[k]=a[i];     
                         i++;
                         j++;}
                         k++;
          }
          while(i<p)
          {
                       c[k]=a[i];
                       i++;
                       k++;
          }
          while(j<q)
          {
                        c[k]=b[j];
                        j++;
                        k++;
          }
         return k;
          }
         main()
                {
                      int a[10][100],b[10][2],c[1001],d[1001],n,i,j,k,x,count;
                      scanf("%d",&n);
                      for(i=0;i<n;i++)
                      { scanf("%d%d",&b[i][0],&b[i][1]);
                        for(j=0;j<b[i][1];j++)
                         scanf("%d",&a[i][j]);
                         }
                         for(i=0;i<n;i++)
                         merge_sort(a[i],0,b[i][1]-1);
                        if(n==1)
                         {for(i=0;i<b[0][1];i++)
                          c[i]=a[0][i];
                          k=b[0][1];
                          }
                         else
                         { 
                              k=merge1(a[0],a[1],c,b[0][1],b[1][1]);
                               for(i=2;i<n;i++){
                              k=merge1(c,a[i],d,k,b[i][1]);
                              for(x=0;x<k;x++)
                                      c[x]=d[x];
                            }
                         }
                         count=0;
                         for(i=0;i<k;i++)
                         {  for(j=0;j<n;j++)
                                         {if(c[i]==b[j][0])
                                          count--;}
                                          }
                                          printf("%d",k+count);
                                         
                         getch();
                         }
                         
                         
