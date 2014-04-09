#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
main()
{
      int a[11]={0,1,2,6,24,120,720,5040,40320,362880},n=1000000,j=9,k=0;
      while(n)
      {
              if(n>a[j]){n=n-a[j];k++;}
              else {printf("%d",k);j--;k=0;}
              }
      return 0;
      }
