#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define over 31624
char p[31624],ultimate[100001];
int prime[3500],end=0;
void soe1()
{
	int i,j;
	for(i=2;i<=(over/2);i++)
	{
		for(j=2;j<=over/i;j++)
			p[i*j]=1;
	}
	for(i=2;i<over;i++)
	{
		if(p[i]!=1)
			prime[end++]=i;		
	}
	prime[end]=100000;
}
void soe2(long int s,long int e)
{
	int x,i;
	long int l=sqrt(e),r,k,a;
	/*for(i=0;i<end;i++)
		cout<<prime[i]<<" ";*/
	a=s;
	for(i=0;prime[i]<=l;i++)
	{
		//cout<<i<<" ";
		x=a%prime[i];		
		r=a/prime[i];
		r*=prime[i];
		r-=s;
		if(r<0)
			r+=prime[i];
		k=e-s;
		//cout<<"no problem "<<r<<endl;
		for(;r<=k;r+=prime[i])
		{	//cout<<s+r<<" ";
			ultimate[r]=1;
		}
	}
	for(i=0;i<=k;i++)
	{
		if(ultimate[i]==0)
			printf("%ld\n",s+i);
	}
}
int main()
{
	long int m,n;
	int t,i;
	scanf("%d",&t);
	memset(p,0,31624);
	soe1();
	while(t--)
	{
		memset(ultimate,0,100001);
		scanf("%ld%ld",&m,&n);
		if(m<=over)
		{
			if(n<=over)
			{
				for(i=0;prime[i]<m;i++);
				for(;prime[i]<=n;i++)
					printf("%d\n",prime[i]);
			}
			else
			{
				for(i=0;prime[i]<m;i++);
				for(;prime[i]<=over;i++)
					printf("%d\n",prime[i]);
				soe2(over+1,n);
			}
		}
		else
			soe2(m,n);
	}
	return 0;
} 
