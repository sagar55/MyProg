#include<stdio.h>
int a[1000001];
void quicksort (int l, int r )
{
	int i ;
	if ( r > l )
	{
		i = partition ( l, r ) ;
		quicksort ( l, i - 1 ) ;
		quicksort ( i + 1, r ) ;
	} 
}
int partition ( int l, int r )
{
    int i,j,p,temp;
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
      int n,j;
       scanf("%d",&n);
      for(j=0;j<n;j++)
      scanf("%d",&a[j]);
      quicksort(0,n-1);
       for(j=0;j<n;j++)
      printf("%d\n",a[j]);
      
      return 0;
      }
   
     
     
     
    
    
