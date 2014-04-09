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
void solve(int a[],int n,int k)
{
int j=0,minn=(int)1e9,sum=0,idx=1;
for(int i=0;i<n;i++)
{
if(j<k){
sum+=a[i];
j++;
}
else
{
sum=sum-a[j-k];
sum+=a[i];
j++;
}

if(sum<minn&&j>=k)
{
minn=sum;
idx=j-k+1;
}
//cout<<minn<<" "<<sum<<endl;
}
 cout<<idx<<endl;
}
main()
{
int i,n,k,a[500005];
//freopen("in.txt","r",stdin);
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
solve(a,n,k);
return 0;
}    
