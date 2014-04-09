#include<stdio.h>
#include<string.h>
char a[10001];
int max(int m,int n)
{ return m>n?m:n;}

int LP(int i,int j)
{
     if((i==j)||(j==i+1&&a[i]!=a[j]))
 {   return 1;}
     else if(j==i+1&&a[i]==a[j])
  {return 2;}
     else if(a[i]!=a[j])
          return max(LP(i+1,j),LP(i,j-1));
          else
         { //printf("%c\n",a[i]);
          return 2+LP(i+1,j-1);
         }
}
     
main()
{
  scanf("%s",a);
  printf("%d",LP(0,strlen(a)-1));
 getch();
}              
