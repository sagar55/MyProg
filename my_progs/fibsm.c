main()
{
int a[311]={0,1},n,t,i,s;
for(i=2;i<300;i++){
a[i]=a[i-1]+a[i-2];
if(i>46)
a[i]=a[i-1]%10+a[i-2]%10;}
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
s=0;
for(i=n;i<n+10;)
s+=a[i++];
s=s+a[n+246]%10;
printf("%d\n",s);
}}
