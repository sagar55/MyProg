long long int R[2][2],MOD=1000000007;
long long int mul(char a[],long long int n,long long int p)
{
          long long int m=0,i,j,temp=0,index=0,x;
          while(m!=p)                           
          {                                    
           x=a[index]*n+temp; 
           a[index]=x%10;
           temp=x/10;
           index=++m;
           }
                     while(temp>0)
                     {
                     a[index]=temp%10;
                     temp=temp/10;
                     index=++m;
                     }
                     return index;}
long long int divide(char a[],long long int j,long long int i)
{
    long long int k;
    long long int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
temp=(a[k]-48)+carry*10;
if(temp<1)
{
carry=temp;temp=0;
}
else
{
carry=temp%i;
temp=temp/i;
}
}
return carry;
}

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
              long long int i,j,k,c[2][2],n=2,nn,index,rem,p,t;
              char d[50];
        for( i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        { 
              c[i][j]=0;
            for(k=0;k<n;k++)
            {
         nn=a[i][k];
        p=b[k][j];
            if(nn==0||p==0){}
            else{
     t=0;
    while(nn>0)
    {
       d[t]=nn%10+48;
       nn=nn/10;
       t++;}
    index=mul(d,p,t);
    d[index]='\0';
    strrev(d);
    rem=divide(d,index,MOD);
    c[i][j]=(c[i][j] + rem)%MOD;
            }    
            }
        }
    }
  a[0][0]=c[0][0];
  a[0][1]=c[0][1];
  a[1][0]=c[1][0];
  a[1][1]=c[1][1];
  
}
main()
{
      long long int q,n,m,a[2][2],b[2][2],t,x=1,y=1;
      scanf("%lld",&t);
      while(t--){
      scanf("%lld%lld",&n,&MOD);
      b[0][0]=a[0][0]=1;b[0][1]=a[0][1]=1;b[1][0]=a[1][0]=1;b[1][1]=a[1][1]=0;
     findNthPower(a,n-1);
     // q=(R[0][0]);
      printf("%lld %lld\n %lld %lld\n",R[0][0],R[0][1],R[1][0],R[1][1]);}
      
      return 0;
      
      }

                
      
      
