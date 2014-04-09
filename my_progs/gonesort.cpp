#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
int n;
cin>>n;
int a[n+1],max=0,cnt=0,i,j,b[n+1];
for(i=0;i<n;i++)
{cin>>a[i];
b[i]=i+1;}
sort(b,b+n);
i=0;
while(i<n){
j=0;
cnt=0;
while(j<n){
if(a[j]==b[i])
{i++;cnt++;}
j++;
}
if(cnt>max)
max=cnt;}
cout<<n-max<<endl;
}
main()
{
int T;
cin>>T;
while(T--)
solve();
return 0;
}

