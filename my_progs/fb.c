#include<stdio.h>
main()
{
char a[1000];
int i,m,j,n,b[30];
scanf("%d",&m);
while(m--)
{
          scanf("%s",a);
          for(i=1;i<27;i++)
          b[i]=0;
          for(i=0;i<strlen(a);i++)
          {
          if(a[i]=='a'||a[i]=='A')
          b[1]++;
