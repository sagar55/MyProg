#include<stdio.h>
#include<math.h>
#define MAX 10000
int prime[MAX+1];
 
void sieve(){
     int i,j;
	prime[1]=1;
	for(i=2;i<=MAX;i++){
		if(!prime[i]){
                        prime[i]=i;
			for(j=i;j*i<=MAX;j++){
				if(!prime[j*i])prime[j*i]=i;
			}
		}
	}
}
main()
{
     int n,t,i;
     sieve();
     for(i=0;i<=10000;i++)
     printf("%d\n",prime[i]);
     scanf("%d",&t);
     while(t--)
     {
               scanf("%d",&n);
               i=sqrt(n);
       printf("%d\n",i);
      }
      return 0;
      }
