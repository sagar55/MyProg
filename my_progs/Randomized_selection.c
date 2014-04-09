#include<stdio.h>
int j;
Rselect(int a[],int l,int r,int x)
{                 
        if(l==r) return a[l];
        if(l < r)  
        { 
            int j = partition( a, l, r); 
           int k = j-l+1;
           if(k==x) 
               return a[j];
           else if(x<k) 
               return Rselect( a, l, j-1, x); 
           else
               return Rselect( a, j+1, r, x-k); 
        }
        return -1;
    }
     
int partition ( int a[ ], int l, int r )
{
    int i,j,p,temp,mid,median;
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
      int n,j,a[10001],i,m;
       scanf("%d",&n);
      for(j=1;j<=n;j++)
      scanf("%d",&a[j]);
      scanf("%d",&i);
      m=Rselect(a,1,n,i);
      printf("\n%d",m);
      getch();
      }
