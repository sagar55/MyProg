nhi aa sakte#include<stdio.h>
int a[100001],i,j,max1,u,ne;
long long b[262148];
void maketree(int n,int l,int h)
{
     if(l==h)
     b[n]=(long long )a[l];
     else
     { 
         maketree(2*n,l,(l+h)/2);
         maketree(2*n+1,(l+h)/2+1,h);
         b[n]=b[2*n]+b[2*n+1];
         }
}
long long Q(int n,int l,int h)
{
    int p,q;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
    return b[n];
    return Q(2*n,l,(l+h)/2)+Q(2*n+1,(l+h)/2+1,h);
}     
main()
{
      int t,n,k,tt,x;
      scanf("%d",&t);
      while(t--)
      {
     scanf("%d%d",&n,&tt);
          k=n;
      for(x=1;x<=n;x++)
       scanf("%d",&a[x]);
       maketree(1,1,n);
       while(tt--){
       scanf("%d%d",&i,&j);
       i++;
       j++;
       printf("%lld\n",Q(1,1,k));
        }
        }
        return 0;
        }
      
