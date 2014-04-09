#include<iostream>
#include<algorithm>
#define mod 1000000007
using namespace std;
main()
{
      long long int a[3],i,n,n1;
      cin>>i;
      while(i--){
      cin>>a[0]>>a[1]>>a[2];
      sort(a,a+3);
      n=(a[1]-1)%mod;
     // printf("%lld\n",n);
      n=n*(a[0]%mod);
       // printf("%lld\n",n);
      n1=(a[2]-2)%mod;
      // printf("%lld\n",n1);
      n=((n%mod)*n1)%mod;
      printf("%lld\n",n);
      }
      return 0;
      }
    // 34532655553466135 14565435435345 1345246654642675  
     //1231001230131231 1241413245325 12351287502154 
     // 1000000000000000000 1000000000000000000 1000000000000000000
      
