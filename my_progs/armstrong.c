#include<stdio.h>
main()
{
      int n,i,j,k=0;
      printf("enter the no.\n");
      scanf("%d",&n);
      j=n;
      while(j>0)
      {
             i=j%10;
             k=k+i*i*i;
             j=j/10;
      }      
      if(k==n)
      printf("this is an armstrong no.");
      else
      printf("its not an arnstrong no.");
      getch();
}       
