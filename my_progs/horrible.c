 #include<stdio.h>
 #include<stdbool.h>
 #define MAX 1000000
typedef struct node
{
        long long int val;
        bool flag;
        }node;
node a[300005];
long long int help[300005],val;
long long int i,j;
void U(long long int n,long long int l,long long int h)
{
    long long int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(l>j||h<i)
    return ;
    if(l==h)
    {
            a[n].val+=val;
            if(a[n].flag)
            {
                         a[n].val+=help[n];
                         help[n]=0;
                         }
                         return ;
                         }
    else if(i<=l&&j>=h){
         help[p]+=val;
         help[q]+=val;
         a[p].flag=a[q].flag=true;
         a[n].val+=(h-l+1)*val;
         return ;
         }
   else if(i<=h&&j>h)
    a[n].val+=val*(h-i+1);
   else if(l<=j&&i<l)
   a[n].val+=val*(j-l+1);
   else if(i>=l&&j<=h)
   a[n].val+=val*(j-i+1);
        U(p,l,mid);
        U(q,mid+1,h);
        return ;
}
long long int Q(long long int n,long long int l,long long int h)
{
    long long int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(i>h||j<l)
    return 0;
    if(a[n].flag)
    {
                 a[n].flag=!a[n].flag;
                 a[n].val+=help[n]*(h-l+1);
                 if(l!=h)
                 {
                    a[p].flag=true;
                    a[q].flag=true;
                    help[p]+=help[n];
                    help[q]+=help[n];
                 }
                 help[n]=0;
                 }
    if(l>=i&&h<=j)
      return a[n].val;
     return Q(p,l,mid)+Q(q,mid+1,h);
}
main()
{
      long long int x,k,q,r,t,t1,z;
      scanf("%lld",&t1);
      x=t1;
      while(t1--){

     scanf("%lld%lld",&k,&t);
      for(z=0;z<3*k;z++)
                  {  a[z].val=0;
                     a[z].flag=0;
                     help[z]=0;}
       while(t--){
               //  printf("hi\n");
       scanf("%lld%lld%lld",&q,&i,&j);
       if(q==0){
                scanf("%lld",&val);
         U(1,1,k);   }
         else
             printf("%lld\n",Q(1,1,k));
              }
              }
         return 0;
         }
