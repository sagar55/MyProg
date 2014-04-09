main()
{
int n;
cin>>n;
for(i=0;i<n;i++)
{
cin>>k;
for(j=0;j<k;j++){
cin>>a[i][j];
x[a[i][j]]++;
}
}
for(i=0;i<m;i++)
{
if(x[i])
v.push_back(x[i])
}
