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
#include<sstream>
using namespace std;
#define INF 2000000000
#define INFLL (1LL<<62)
#define SS ({int x;scanf("%d", &x);x;})
#define SSL ({LL x;scanf("%lld", &x);x;})
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define ull unsigned long long
#define lint long long
#define MX 10000001
long long MOD=1000000007;
void SquareMatrixMultiply(long long int A[2][2],long long int B[2][2],long long int C[2][2])
{
     int n=2;
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

void power(long long int A[2][2],long long int B[2][2],long long int n)
{
     int k=2;
     if(n==1)
     {
             for(int i=0;i<k;i++)
                     for(int j=0;j<k;j++)
                             B[i][j]=A[i][j];
             return ;
      }
      else if(n%2)
      {
           long long int C[2][2], D[2][2];
           power(A,C,n/2);
           SquareMatrixMultiply(C,C,D);
           SquareMatrixMultiply(A,D,B);
           return ;
       }
       else
       {
           long long  int C[2][2], D[2][2];
           power(A,C,n/2);
           SquareMatrixMultiply(C,C,B);
           return ;
        }
}
int main()
{       
        lint A[2][2]={1,1,1,0};
        lint B[2][2];
        int t=SS;
        lint n,re;
        while(t--)
        {
                scanf("%lld",&n);
                if(n==0) re=0;
                else if(n==1) re=2;
                else { power(A,B,n+2);
                re=B[0][0];
                }
                printf("%d\n",re%MOD);
          }
       return 0;
       } 
