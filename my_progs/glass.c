#include<stdio.h>
int main()
{
long long int num,i,j,ans,p=0;
int t;
scanf("%d",&t);
if(t>100)
return 0;
while(t-->0)
{
scanf("%lld",&num);
for(i=0;i*i<=num;i++)
{
	for(j=0;j*j<=num;j++)
	{
		ans=i*i+j*j;
		if(ans==num)
		p=p+1;
	}
}
if(p>0)
printf("Yes\n");
else
{
if(num==1)
printf("Yes\n");
else
printf("No\n");
}
p=0;
}
return 0;
}
