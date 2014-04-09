#include<stdio.h>
main()
{
      int i,j;
      scanf("%d%d",&i,&j);
      if((j-(i+.5))!=0&&i%5!=0)
           printf("%d",j-(i+.5)); 
      else
      printf("%d",j);
      getch();
      }                         
