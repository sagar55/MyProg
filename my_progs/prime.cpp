#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
void prime(int n){
bool a[n+1];
      int m,i,j;
       for(i=0;i<=n;i++)
          a[i]=0;
         for(i=4;i<=n;i+=2)a[i]=1;
       m=sqrt(n);  
       for(i=3;i<=m;i++)
         { 
            if(a[i]==0)
            {
	            for(j=3;i*j<=n;j+=2)
                if(a[i*j]==0)
                a[i*j]=1;
            }
	       }
int cnt=0;
    freopen("out.txt","w",stdout);
for(i=2;i<=n;i++){
if(a[i]==0)
{
cnt++;
//cout<<i<<",";
}
}

cout<<endl<<cnt;
}
main()
{
int n;
//cin>>n;
prime(100000);
return 0;
}
