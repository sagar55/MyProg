//generate fibbonacci series upto nth term
#include<stdio.h>
long long int b[100]={0,1,1};
int m;
long long int fibbR(long long int n)
{
    if(b[n]!=0)
    return b[n];
    else{
    b[n]=(fibbR(n-1)+fibbR(n-2));return b[n];}
}

main()
{
      int n,i;
      printf("enter the no. upto which you want to see fibonacci series\n");
      scanf("%d",&n);
      printf("fibb. series upto %d th term is\n ",n);
      for(i=1;i<=n;i++)
            printf("%lld\t",fibbR(i));
getch();
}


