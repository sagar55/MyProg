                 long long int R[2][2],MOD=1000000007;
findNthPower( long long int M[][2] , long long int n )
{
              R[0][0]=1;R[0][1]=0;R[1][0]=0;R[1][1]=1;
while(n>0){
           if(n%2==1)
      {matrix_mul(R,M);
      n-=1;}
    else
    {matrix_mul(M,M);
    n /= 2;}
}
}
matrix_mul(long long int a[][2],long long int b[][2])
{
               long long int i,j,k,c[2][2],n=2;
        for( i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        { 
              c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=(c[i][j] + (a[i][k] * b[k][j])%MOD)%MOD;
            }
        }
    }
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
  a[i][j]=c[i][j];
}
main()
{
      long long int q,n,m,a[2][2],b[2][2],t,x=1,y=1;
      scanf("%lld",&t);
      while(t--){
      scanf("%lld%lld",&n,&m);
      b[0][0]=a[0][0]=1;b[0][1]=a[0][1]=1;b[1][0]=a[1][0]=1;b[1][1]=a[1][1]=0;
      if(n==m&&n>1)
      {findNthPower(a,m-2);
      q=(((R[0][0])*x)%MOD+((R[1][0])*y)%MOD)%MOD;}
      else if(n==0&&m==1) q=x%MOD;
      else if((n==0||n==1)) {findNthPower(a,m);
        q=((((R[0][0]-2)*x)%MOD+((R[1][0]-1)*y)%MOD+x)%MOD+y)%MOD;}
                else {
      findNthPower(a,m);
      a[0][0]=R[0][0];a[0][1]=R[0][1];a[1][0]=R[1][0];a[1][1]=R[1][1];
      findNthPower(b,n-1);
      if(a[0][0]<R[0][0])
      a[0][0]=a[0][0]+MOD;
      if(a[1][0]<R[1][0])
      a[1][0]=a[1][0]+MOD;
q=(((a[0][0]-R[0][0])*x)%MOD+((a[1][0]-R[1][0])*y)%MOD)%MOD;}
     printf("%lld\n",q);
      }
      return 0;
      
      }

                
      
      
