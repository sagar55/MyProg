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
int main()
{
        int t=SS;
        
        char f;
        scanf("%c",&f);
        int ans;
        for(int j=0;j<t;j++)
        {
                string A;
                getline(cin,A);
                int C[26]={0};
                for(int i=0;i<A.size();i++)
                {
                        if(A[i]==' ') continue;
                        C[A[i]-'A']++;
                }
                ans=0;
                ans=min(min(min(min(min(min(min(C[0],C[2]/2),C[4]),C[7]),C[10]),C[15]),C[17]),C[20]);
                printf("Case #%d: %d\n",j+1,ans);
          }
      return 0
      ;
      }
                
                        
