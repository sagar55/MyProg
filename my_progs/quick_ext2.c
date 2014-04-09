#include<stdio.h>
long long int m=0;
void quicksort ( int a[ ], int l, int r )
{
	int i ;
	if ( r > l )
	{
		i = partition ( a, l, r ) ;
		quicksort ( a, l, i - 1 ) ;
		m=m+i-l;
		quicksort ( a, i + 1, r ) ;
		m=m+r-i;
	} 
}
int partition ( int a[ ], int l, int r )
{
    int i,j,p,temp,mid,median;
    mid=(l+r)/2;
    if(a[l]>a[mid]&&a[l]<a[r]||a[l]<a[mid]&&a[l]>a[r])
    median=l;
    else if(a[r]>a[mid]&&a[r]<a[l]||a[r]<a[mid]&&a[r]>a[l])
    median=r;
    else
    median=mid;
    temp=a[l];
    a[l]=a[median];
    a[median]=temp;
    p=a[l];
    i=l+1;
    for(j=l+1;j<=r;j++)
    { if(a[j]<p)
    { temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     i++;}
     }
     temp=a[i-1];
     a[i-1]=a[l];
     a[l]=temp;
     return i-1;
     }
main()
{
      int n,j,a[10001];
       scanf("%d",&n);
      for(j=1;j<=n;j++)
      scanf("%d",&a[j]);
      quicksort(a,1,n);
       for(j=1;j<=n;j++)
       printf("%d\n",a[j]);
      printf("\n%d",m);
      getch();
      }
   
     
     
     
    
    
