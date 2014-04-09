#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
     int c;
  vector<int>v;           
  vector<int>::iterator it;
  int n,i,m,t,p;
 
  scanf("%d",&t);
scanf("%d",&n);
  while(t--)
  {
          scanf("%d",&p);
          n--;
          while(n--)
          {scanf("%d",&m);
          p=m^p;
          }
          printf("%d\n",p);
          scanf("%d",&n);
          
          }
          return 0;
          }
    
