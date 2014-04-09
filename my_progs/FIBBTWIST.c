int R[4][4]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},MOD;
findNthPower( int M[][4] , int n )
{
              R[0][0]=1;R[0][1]=0;R[0][2]=0;R[0][3]=0;
               R[1][0]=0;R[1][1]=1;R[1][2]=0;R[1][3]=0;
                R[2][0]=0;R[2][1]=0;R[2][2]=1;R[2][3]=0;
                 R[3][0]=0;R[3][1]=0;R[3][2]=0;R[3][3]=1;
while(n>0){
           if(n%2==1)
      {matrix_mul(R,M);
      n-=1;}
    else
    {matrix_mul(M,M);
    n /= 2;}
}
}
matrix_mul(int a[][4],int b[][4])
{
               int i,j,k,c[4][4],n=4;
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
 for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   a[i][j]=c[i][j];
}
main()
{
      int  a[4][4]={1,1,1,0,1,0,0,0,0,0,1,1,0,0,1,0},q,n,b[4]={2,1,2,1},i,j,m,t;
      scanf("%d",&t);
      while(t--){
                a[0][0]=1;a[0][1]=1;a[0][2]=1;a[0][3]=0;
               a[1][0]=1;a[1][1]=0;a[1][2]=0;a[1][3]=0;
                a[2][0]=0;a[2][1]=0;a[2][2]=1;a[2][3]=1;
                 a[3][0]=0;a[3][1]=0;a[3][2]=0;a[3][3]=1;
      scanf("%d%d",&n,&MOD);
      if(n==0)
       printf("0\n");
       else if(n==1)
       printf("1\n");
        else{
      findNthPower (a,n-2);
      q=(R[0][0]*b[0])%MOD+(R[0][1]*b[1])%MOD+(R[0][2]*b[2])%MOD+(R[0][3]*b[3])%MOD;
      printf("%d\n",q%MOD);}}
      getch();
 }
