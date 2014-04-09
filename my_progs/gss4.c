#include<stdio.h>
long long int a[100002],i,j,maximum1,u,ne,p,q,r,s;
long long int maximum(long long int i,long long int j)
{
        return i>j?i:j;}

long long int b[262148];
void maketree(long long int n,long long int l,long long int h)
{
     long long int left,ryt;
     if(l==h)
     b[n]=a[l];
     else
     {
         left=2*n;
         ryt=2*n+1;
         maketree(left,l,(l+h)/2);
         maketree(ryt,(l+h)/2+1,h);
          b[n]=b[left]+b[ryt];
        }
}
long long int U(long long int n,long long int l,long long int h)
{
    long long int left=2*n,ryt=2*n+1,m=(l+h)/2,nn=m+1;
    if(l!=h){
        if(l<=i&&m>=i||l<=j&&m>=j||l>=i&&m<=j)
    U(left,l,(l+h)/2);
     if(nn<=i&&h>=i||nn<=j&&h>=j||nn>=i&&h<=j)
    U(ryt,(l+h)/2+1,h);
   b[n]=b[left]+b[ryt];
   //printf("%d %d %d:\n",b[left],b[ryt],b[n]);
    }
    else
        b[n]=a[l];
}
long long int Q(long long int n,long long int l,long long int h)
{
    long long int p,q;
     if(i>h||j<l)
    return -1;
    if(l>=i&&h<=j)
    return b[n];
     p=Q(2*n,l,(l+h)/2);
     q=Q(2*n+1,(l+h)/2+1,h);
     if(p==-1)
      return q;
     else if(q==-1)
      return p;
     else
        return p+q;
}

main()
{
      long long int n,x,l,h,k,p,m=1,tmp;
      // freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
      while(scanf("%lld",&k)!=EOF){
      for(x=1;x<=k;x++)
       scanf("%lld",&a[x]);
       maketree(1,1,k); printf("Case #%lld:\n",m++);
      scanf("%lld",&n);
     
        while(n--)
        { scanf("%lld%lld%lld",&l,&i,&j);
           if(i>j)
             {
                 tmp=i;
                 i=j;
                 j=tmp;
             }
         if(l==0)
         {
             for(p=i;p<=j;p++)
                a[p]=sqrt(a[p]);
             U(1,1,k);
         }
         else{
         printf("%lld\n",Q(1,1,k));
         }}
        // printf("\n");
}
         return 0;
         }


