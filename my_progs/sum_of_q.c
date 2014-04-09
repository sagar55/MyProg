 #include<stdio.h>
 #include<stdbool.h>
 #define MAX 1000000
long long int b[262500],a[100001];
int i,j;
long long int maketree(int n,int l,int h)
{
     if(l==h)
    { b[n]=a[l];
      return b[n];
      }
     else
     { 
         b[n]=maketree(2*n,l,(l+h)/2)+maketree(2*n+1,(l+h)/2+1,h);
         return b[n];
         }
         }
long long int Q(int n,int l,int h)
{
    int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return b[n];
     return Q(p,l,mid)+Q(q,mid+1,h);
}     
main()
{
      int x,k,q,r,t,t1,z;
      scanf("%d",&t1);
      x=t1;
      while(t1--){
                 
     scanf("%d%d",&k,&t);
      for(z=1;z<=k;z++)
      scanf("%lld",&a[z]);
                   maketree(1,1,k);  
       while(t--){
               //  printf("hi\n");
       scanf("%d%d",&i,&j); 
       i++;
       j++;
             printf("%lld\n",Q(1,1,k));
              }
              }
         return 0;
         }
