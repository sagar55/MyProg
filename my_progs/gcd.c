#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define size 1034570
bool a[size];
void sieve()
{
       int i,j,k=0;
       a[0]=1;
       a[1]=0;
       for(i=4;i<size;i+=2) a[i]=1;
       for(i=3;i*i<size;i+=2)
               {  if(!a[i]){
               for(j=i*i;j<size;j+=i)
               a[j]=1;}
               }
return ;
}
long long int gcd(long long int,long long int);
main()
{
      long long int i,j,count=0;
      sieve();
      j=30;
   for(i=1;i<30;i++)
   {
      if(a[gcd(i,j)]==1)
      count++;
      }
      printf("%d",count);
      getch();
      }
      long long int gcd(long long int i,long long int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
              
