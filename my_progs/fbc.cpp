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
#define rep(i,n) for(i=0;i<(n);i++)
#define SSF getint()
#define _mp make_pair

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
#define MAX2 100032
#define SIZE  3126
unsigned int X[SIZE];
//#define makeSet(x) (X[x>>5]=X[x>>5]|(1<<(x&31)))
//#define unSet(x)   (X[x>>5]=X[x>>5]&(~(1<<(x&31))))
int M[MAX2],frequency[MAX2];
void inline makeSet(int x){
        if(x<MAX2)
             (X[x>>5]=X[x>>5]|(1<<(x&31)));   
}
void inline unSet(int x){
        if(x<MAX2)
             (X[x>>5]=X[x>>5]&(~(1<<(x&31))));
}
int main(){
        int t,i,n,k,a,sum,cnt,u,flag,j,l,ha,s,fg;
        
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   t=SS;
        long long int p,q,b,c,r;
        for(int tr=0;tr<t;tr++){
                n=SS;
                k=SS;
                a=SS;
                b=SS;
                c=SS;
                r=SS;
                M[0]=a;
                memset(X,0,sizeof(X));
                memset(frequency,0,sizeof(frequency));
                makeSet(a);
                if(a<MAX2)
                frequency[a]++;
                for(i=1;i<k;i++){
                        M[i]=(b*M[i-1]+c)%r;
                        makeSet(M[i]);
                        if(M[i]<MAX2) 
                                frequency[M[i]]++;
                    //    cout<<M[i]<<endl;
                }
               for(s=0;s<=(n-k-1)%(k+1);s++){
                        flag=1;
                        for(j=0;j<SIZE && flag;j++){
                                if(X[j]!=-1){
                                        for(ha=0;ha<32;ha++){
                                                if(!(X[j]&(1<<ha)) ){
                                                        q=((j)<<5 )+ha;
                                                        if(q<MAX2){
                                                                if(frequency[q]>0) continue;
                                                                makeSet(q);
                                                                frequency[q]++;
                                                        }
                                                        if(M[s]<MAX2){
                                                                if(frequency[M[s]]==1)
                                                                        frequency[M[s]]--,unSet(M[s]);
                                                                else
                                                                        frequency[M[s]]--;
                                                        }
                                                        M[s]=q;
                                            //            cout<<M[s]<<endl;
                                                        flag=0;
                                                        break;
                                                        
                                                }
                                        }
                                }
                        }
                }
                printf("Case #%d: %d\n",tr+1,M[(n-k-1)%(k+1)]);
        }
        return 0;
}
