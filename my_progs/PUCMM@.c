long long int mod=1000000003;
main()
{
      int t,j,k,i;
      long long int n,b,temp,carry,a,s[37],c,d,p,q;
      scanf("%d",&t);
      while(t--)
      {
                temp=0;carry=0;
                scanf("%lld",&n);
               a=(n*(n+1)*(n+2)/6)%mod;
             b=(3*(n*n)+6*n+1);
                i=0;
                while(b!=0)
                {
                           s[i++]=b%10;
                           b=b/10;
                           } for(k=0;k<i;k++)
   { temp=s[k]*a+carry;
    s[k]=temp%10;
    carry=temp/10;}
    while(carry!=0)
    {
                   s[i++]=carry%10;
                   carry=carry/10;
                   } 
         for(k=i-1;k>0;k--)
    {
                    carry=s[k]+carry*10;
                                  carry=carry%mod;
                    }printf("%lld\n",carry);}
      return 0;
      }

