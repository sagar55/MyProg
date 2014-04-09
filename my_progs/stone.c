#include<stdio.h>
#include<malloc.h>
 
int main()
{
int T,N,stones,i,j,count=0;
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%d",&N);
for(j=0,count=0;j<N;j++)
{
    scanf("%d",&stones);
     count+=stones/(j+1);
    }
  if(count%2==0)
  printf("BOB\n");
 
  else
  printf("ALICE\n");
}
return 0;
}
