#include<stdio.h>
int a[100001],b[262148],i,j,max1,u,ne;
void maketree(int n,int l,int h)
{
     if(l==h)
     b[n]=l;
     else
     { 
         maketree(2*n,l,(l+h)/2);
         maketree(2*n+1,(l+h)/2+1,h);
         if(a[b[2*n]]>=a[b[2*n+1]])
         b[n]=b[2*n];
         else
         b[n]=b[2*n+1];
         }
}
int Q(int n,int l,int h)
{
    int p,q;
    if(i>h||j<l)
    return -1;
    if(l>=i&&h<=j)
                return b[n];
     p=Q(2*n,l,(l+h)/2);
     q=Q(2*n+1,(l+h)/2+1,h);
     if(p==-1)
              return q;
      else  if(q==-1)
        return p;
      else  if(a[p]>a[q])
        return p;
        else 
        return q;
}  
main()
{
      int n,x,k,sum,p,m=1,t; 
       
     scanf("%d",&k);
      for(x=1;x<=k;x++)
       scanf("%d",&a[x]);
        scanf("%d",&n);
       maketree(1,1,k);
        p=k-n+1;i=1;
        while(p--)
        {
        j=i+n-1;
         printf("%d ",a[Q(1,1,k)]);
         i++;
          }
          printf("\n");
         
        getch();;
         }

