#include<stdio.h>
long long int R[2][2],MOD=123456789;
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
      long long int q,n,a[2][2],b[2][2],t;
      scanf("%lld",&t);
      while(t--){
      scanf("%lld",&n);
       a[0][0]=1;a[0][1]=1;a[1][0]=1;a[1][1]=0;
       if(n==1)
       printf("3\n");
       else{ 
       findNthPower(a,n-1); 
       q=R[1][0]+(4*(n-1))%MOD+3;
       printf("%lld\n",q%MOD);
       }
       }
       return 0;
       }
