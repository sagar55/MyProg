#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
long long int n,y;
double x;
scanf("%lld",&n);
x=log2(n);
y=log2(n);
if(x-y==0)
printf("TAK");
else
printf("NIE");
return 0;
}
