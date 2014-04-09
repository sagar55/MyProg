#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int,int> II;
typedef vector<II> VII;
typedef vector<VII> VVII;
typedef vector<VI> VVI;

#define INF 2000000000
#define INFLL (1LL<<62)
#define FI first
#define SE second
#define PB push_back
#define SS ({int x;scanf("%d", &x);x;})
#define SSL ({LL x;scanf("%lld", &x);x;})
#define P(x) printf("%lld\n",x)
#define rep(i,n) for(i=0;i<(n);i++)
#define rep1(i,n) for(i=1;i<=(n);i++)
#define SSF getint()
#define _mp make_pair
#define lint long long
int MOD;

inline void _min(int &a,int b)
{
        if(a>b)
                a=b;
}
inline void _max(int &a,int b)
{
        if(a<b)
                a=b;
}

/********************* FAST IO *********************************/

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

//******************************** programme code starts here*************************//
void SquareMatrixMultiply(long long int A[15][15],long long int B[15][15],long long int C[15][15])
{
     int n=15;
    for(int i=0;i<n;i++)
    {
            for(int k=0;k<n;k++)
            {
                    C[i][k]=0;
                    for(int j=0;j<n;j++)
                    {
                            C[i][k]=(C[i][k]+(A[i][j]*B[j][k])%MOD)%MOD;
                    }
           }
    }
return ;
}

void power(long long int A[15][15],long long int B[15][15],long long int n)
{
     int k=15;
     if(n==1)
     {
             for(int i=0;i<k;i++)
                     for(int j=0;j<k;j++)
                             B[i][j]=A[i][j];
             return ;
      }
      else if(n%2)
      {
           long long int C[15][15], D[15][15];
           power(A,C,n/2);
           SquareMatrixMultiply(C,C,D);
           SquareMatrixMultiply(A,D,B);
           return ;
       }
       else
       {
           long long  int C[15][15], D[15][15];
           power(A,C,n/2);
           SquareMatrixMultiply(C,C,B);
           return ;
        }
}
int main()
{
    int t=SSF,i,n,k,j;
    lint  A[15][15];
    int B[15];
    int D[15];
    lint re;
    while(t--)
    {
            k=SSF;
            lint ways[15][15]={0};
            rep(i,k) B[i]=SSF;
            rep(i,k) ways[0][i]=SSF;
            n=SSF;m=SSF;MOD=SSF
            if(n<=k) printf("%d\n",B[n-1]);
            else 
            {
                rep(i,15)
                    ways[i][i-1]=1;
                power(ways,A,n-k); 
                
                re=0;
                rep(i,k)  re=(re+(A[0][i])*B[k-i-1])%MOD;     
                printf("%d\n",re);
             }
    }
return 0;
}
