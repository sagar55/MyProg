#include<stdio.h>
main()
{
      char a[51][51],b[51][101];
      int t,i,j;
      scanf("%d",&t);
      while(t!=0)
      {
                 j=0;
                 while(j<t){
              scanf("%s",a[j]);
              for(i=0;i<t;i++){
                       b[j][2*i]=a[j][i];
                       b[j][2*i+1]=a[j][i];
                               }
              b[j][2*t]='\0';
              j++;
                 }
                 for(i=0;i<t;i++)
                 printf("%s\n%s\n",b[i],b[i]);
      scanf("%d",&t);
      }
      return 0;
      }
