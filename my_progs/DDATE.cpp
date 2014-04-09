#include<stdio.h>
unsigned createMask(unsigned a, unsigned b)
{
   unsigned r = 0;
   for (unsigned i=a; i<=b; i++)
       r |= 1 << i;

   return r;
}
main()
{
      int i=-1;
      printf("%d",createMask(5,8)&i);
      scanf("%d",&i);
      return 0;
      }
