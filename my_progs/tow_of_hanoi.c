//tower of hanoi
#include<stdio.h>
void toh(int n,char S,char T,char D)
      {
           if(n==1)
               printf("move disk 1 from %c to %c\n",S,D);
           else
           {
               toh(n-1,'S','D','T');
               printf("move disk %d from %c to %c\n",n,S,D);
               toh(n-1,'T','S','D');
           }
      }    

main()
{
      int n;
      char S,T,D;
      printf("enter the no. of disk to move from S to D using T as intermediate\t");
      scanf("%d",&n);
      toh(n,'S','T','D');
      getch();
}

