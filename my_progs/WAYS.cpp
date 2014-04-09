main(){int t,n,i,j;scanf("%d",&t);while(t--){j=1;scanf("%d",&n);for(i=n+1;i<=2*n;)j*=i++;while(n)j/=n--;printf("%d\n",j);}exit(0);}
