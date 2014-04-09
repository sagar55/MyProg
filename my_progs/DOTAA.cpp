#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main ()
{
	int T,i,n, m, D,health[501],j;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&n,&m,&D);
		for( j=0;j<n;j++)
			scanf("%d",&health[j]);
		sort( health, health+n, greater<int>() );
		for( j=0;j<n;j++)
		{
			m -= health[j]/D;
			m += ( health[j]%D == 0 ) ? 1 : 0;
			if(m<=0)
			break;
		}
		if( m > 0 )
		printf("NO\n");
		else
			printf("YES\n");
	}

return 0;
}
