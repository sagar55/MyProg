#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
long long int a[100001],b[100001][2];
long long int t,n,i,m;
cin >> n;
for(i=1;i<=n;i++)
cin >> a[i];
cin >> m;
long long int  h=0;
for(i=1;i<=m;i++)
{
cin >> b[i][0] >>b[i][1];
if(a[b[i][0]]>h)
{
cout<< a[b[i][0]]<<"\n";
h=b[i][1]+a[b[i][0]];
}
else {cout << h<<"\n";h=h+b[i][1];}
}
return 0;
}
