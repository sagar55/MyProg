#include<stdio.h>
main()
{
      int i;
      float j,k;
      scanf("%d%f",&i,&j);
      k=j-(i+.5);
      if(k>=0&&i%5==0)
           printf("%.2f",k); 
      else
      printf("%.2f",j);
      getch();
      }                         
