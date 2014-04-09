#include<stdio.h>
#define BUFSIZE (10000)
 
char inputbuffer[BUFSIZE];
char *ioptr=inputbuffer+BUFSIZE,*ioend=inputbuffer+BUFSIZE;
int input_eof=0;
 
#define getchar() ({if (ioptr >= ioend) init_input(); *ioptr++;})
#define eof() (ioptr>=ioend && input_eof)
#define eoln() ({if(ioptr >= ioend) init_input(); *ioptr == '\n';})
 
void init_input()
{
        if (input_eof)
                return;
        int existing = BUFSIZE - (ioend - inputbuffer);
        memcpy(inputbuffer, ioend, existing);
        int wanted = ioend - inputbuffer;
        int count=fread(inputbuffer + existing, 1, wanted, stdin);
        if (count < wanted)
                input_eof = 1;
        ioend = inputbuffer + BUFSIZE - (wanted - count);
        while (*--ioend > ' ');
        ioend++;
        ioptr=inputbuffer;
}
 
inline void non_whitespace()
{
        for(;;)
        {
                if(ioptr>=ioend)
                        init_input();
                if(*ioptr>' ')
                        return;
                ioptr++;
        }
}
 
inline int getint()
{
        non_whitespace();
        int n=0;
        while(*ioptr>' ')
                n=(n<<3)+(n<<1)+*ioptr++-'0';
        ioptr++;
        return n;
}
long long int R[2][2],MOD=1000000007;
findNthPower( long long int M[][2] , long long int n )
{
              R[0][0]=1;R[0][1]=0;R[1][0]=0;R[1][1]=1;
while(n>0){
           if(n&1)
      matrix_mul(R,M);
    matrix_mul(M,M);
    n >>= 1;
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
      scanf("%lld",&n);
      b[0][0]=a[0][0]=1;b[0][1]=a[0][1]=1;b[1][0]=a[1][0]=1;b[1][1]=a[1][1]=0;
     findNthPower(a,2*n);
      q=(R[0][0]*R[1][0])%MOD;
      printf("%lld\n",q);}
      return 0;
      
      }

                
      
      
