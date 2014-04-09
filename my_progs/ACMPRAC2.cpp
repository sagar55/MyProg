#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool myfunction (int i,int j) { return (i>j); }
main()
{
      char a[10001];
      int b[10001],n,t,i,j,f,l;
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d%s",&n,a);
      l=strlen(a);
      j=0;f=0;
      for(i=1;i<l;i++)
      { if(a[i]!=a[i-1])
      {
     b[j++]=i-f;
      f=i;
      }
      }
      b[j++]=i-f;
      f=0;
      if(n<j){
      sort(b,b+j,myfunction);
      for(i=0;i<n;i++)
      f+=b[i];}
      else
      {
           for(i=0;i<j;i++)
      f+=b[i];}
      printf("%d\n",f);
      }
      return 0;
      }
        
      
      
