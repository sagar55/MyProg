long long int R[2][2],g;f(long long int M[][2],int n){while(n){if(n%2){m(R,M);n-=1;}else{m(M,M);n/= 2;}}}m(long long int a[][2],long long int b[][2]){int i,j,k,c[2][2];i=j=k=0;for(i=0;i<2;i++)for(j=0;j<2;j++){c[i][j]=0;for(k=0;k<2;k++)c[i][j]=c[i][j]+(a[i][k]*b[k][j])%g;}for(i=0;i<2;i++)for(j=0;j<2;j++)a[i][j]=c[i][j]%g;}main(){long long int q,n,a[2][2],x,y,t;scanf("%lld",&t);while(t--){scanf("%lld%lld%lld%lld",&x,&y,&n,&g);R[0][0]=a[0][0]=a[0][1]=a[1][0]=R[1][1]=1;a[1][1]=R[0][1]=R[1][0]=0;if(n==1)q=x;else{f(a,n);q=(((R[0][0]-2)*y)%g+((R[0][1]-1)*x)%g+x)%g+y;}printf("%lld\n",q%g);}exit(0);}
