#include<stdio.h>
double pi = 3.1415926536;
main()
{
	int t;
	int n,flag = 0;
	scanf("%d",&n);
	double a[t+100];
	for(int i = 0 ; i < n ; i ++)
		scanf("%d",&a[i]);
	if(n%2 == 1)
	flag = 1;
	double s = 0;
	int  i;
	double ans = 0;
	for( int i = 0 ; i < n; i++)
	{
	if(flag && i%2 == 0 )
	ans +=  a[i]*a[i] - s*s;
	else if(flag && i%2)
	s = a[i] ;
	else if(flag == 0 && i%2 == 1)
	ans += a[i]*a[i] - s*s;
	else 
	s = a[i];	}
	
	printf("%lf",pi*ans);
	return 0 ;
	
}
