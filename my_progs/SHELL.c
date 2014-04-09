#include<stdio.h>
#include<string.h>
void swap(char a[],char b[])
{
          int i;
          char temp;
          for(i=0;i<7;i++)
          {temp=a[i];
          a[i]=b[i];
          b[i]=temp;
          }
          }
                          
main()
{
      char a[10],b[10],c[10],*temp;
      int i,j,n;
      while(scanf("%s",a)!=EOF)
      {
                               scanf("%d",&n);
                                if(n==10) return 0;
                               while(n--)
                               {
                                         scanf("%s%s",b,c);
                                         if(strcmp(a,b)==0)
                                        swap(a,c);
                                           else if(strcmp(a,c)==0)
                                         swap(a,b);
                                           }
                                           printf("%s\n",a);
                                           }
                                           return 0;
                                           }
