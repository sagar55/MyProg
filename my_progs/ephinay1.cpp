#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>
 
using namespace std;
 
#define s(n)					scanf("%d",&n)
#define sl(n) 					scanf("%lld",&n)
#define sf(n) 					scanf("%lf",&n)
#define ss(n) 					scanf("%s",n)
#define sc(n)                   {char temp[4]; ss(temp); n=temp[0];}
#define INF						(int)1e9
#define LINF					(long long)1e18
#define swap(a,b)                int temp; temp=a;a=b;b=temp;
#define EPS						1e-9
#define maX(a,b)				((a)>(b)?(a):(b))
#define miN(a,b)				((a)<(b)?(a):(b))
#define abS(x)					((x)<0?-(x):(x))
#define FOR(i,a,b)				for(long long int i=a;i<b;i++)
#define FORREV(k,a,b)           for(int i=a;i>b;i--)
#define REP(i,n)				FOR(i,0,n)
#define FOREACH(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define CASEN(n)                int cas=1;while(scanf("%d",&n)!=EOF)
#define CASE(T)                 int T;scanf("%d ",&T);while(T--)
#define mp						make_pair
#define FF						first
#define SS						second
#define tri(a,b,c)				mp(a,mp(b,c))
#define XX						first
#define YY						second.first
#define ZZ						second.second
#define pb						push_back
#define fill(a,v) 				memset(a,v,sizeof a)
#define pb				        push_back  
#define all(x)					x.begin(),x.end()
#define SZ(v)					((int)(v.size()))
#define SORT(v)			        sort((v).begin(),(v).end())
#define DREP(a)					sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)			(lower_bound(all(arr),ind)-arr.begin())
#define FILEI                    freopen("input.txt","r",stdin);
#define FILEO                    freopen("output.txt","w",stdout);
 int mul(int a[],int n,int p)
{
          int m=0,temp=0,index=0,x;
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
char c[100001];
int power(int b)
  {   
  	int a[100000],m,i=0,t,k=0,j,n=2,index,x=0,p[100];

    n=2;
     m=n;
     i=0;x=0;
     if(b==0){
              c[0]=49;
              c[1]='\0';}
              else if(b==1){
              c[0]=50;
              c[1]='\0';}
              else{
    while(n>0)
    {
       a[i]=n%10;
       n=n/10;
       i++;}
       j=m;
    while(b>1)
    {
        index=mul(a,j,i);
        i=index;
        b--;}
    for(i=index-1,j=0;i>=0;i--,j++)
    c[j]=a[i]+48;
    c[index]='\0';
   }
   // printf("%s\n",c);
}

main()
{
      CASE(T){
              int r,n;
              long long int p,q;
              char a[100];
              c[0]=49;
              c[1]='\0';
              sl(n);r=0;
              FOR(i,0,n){
                         scanf("%s",a);
                         if(strcmp(a,c)<=0&&!r){  
                          p = atoi(a);
                          q= atoi(c);
                         power(q-p);}
                         else
                         r=1;
                         }
                         if(r)
                         printf("No\n");
                         else
                         printf("Yes\n");
                         }
                         return 0;
                         }
                         
