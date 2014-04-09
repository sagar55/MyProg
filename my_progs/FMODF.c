                 long long int R[2][2],MOD=10000007;
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
main(){
      long long int q,n,m,a[2][2],b[2][2],t,x=1,y=1;
      scanf("%lld",&t);
      while(t--){
      scanf("%lld%lld",&n,&m);
      b[0][0]=a[0][0]=1;b[0][1]=a[0][1]=1;b[1][0]=a[1][0]=1;b[1][1]=a[1][1]=0;
       findNthPower(b,m+1);
       MOD=R[1][1];
      findNthPower(a,n+1);
       printf("%d \n",R[1][1]);
   //  printf("%lld\n",q);
      }
      return 0;
      
      }

                
      
      
