main(){long long int t,n,i,j;scanf("%lld",&t);while(t--){j=1;scanf("%lld",&n);for(i=n+1;i<=2*n;i++)j*=i;while(n)j/=n--;printf("%lld",j);}exit(0);}

