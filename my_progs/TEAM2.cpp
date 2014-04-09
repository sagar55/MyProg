#include<stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
main()
{
      int i,j,k,n,a[4],t=1;
      vector<int>v;
      while(scanf("%d",&n)!=EOF)
      {
    v.push_back (n);
    scanf("%d%d%d",&i,&j,&k);
    v.push_back (i);
    v.push_back (j);
    v.push_back (k);
      make_heap (v.begin(),v.end());
      i=v.front();
       pop_heap (v.begin(),v.end()); v.pop_back();
       j=v.front();
       printf("Case %d: %d\n",t,i+j);t++;
      v.clear();}
      return 0;
      }
                
