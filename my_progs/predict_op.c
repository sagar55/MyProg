#include<stdio.h>
int g = 0;
int Add(int i)
{
static int s=0;
s =s+i;
g=g+i;
return s;
}


main()
{
int s=0;int g=0,j,i;
for(i=1;i<=11;i++)
{ g=0;s=0;
j = Add(i);
}
printf("%d,%d",j,g);


getch();
}
