#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
main()
{
     char a[100005],tmp;
     int i,flag,n,t,b[100005],c[11][2];
     scanf("%d",&t);
     while(t--)
     {
               flag=0;k=0;
     scanf("%s",a);
     for(i=strlen(a)-1;i>0;i--)
     {
                               b[k]=a[i]-48;
                               c[a[i]-48][0]++;
                               c[a[i]-48][1]=k++;
                        if(a[i-1]<a[i])
                        {
                                  flag=1;
                                  for(i=a[i-1]-48+1;i<10;i++)
                                  if(c[i][0]>0)
                                  {tmp=a[i-1]-48;
                                  a[i-1]=i+48;
                                  b[c[i][1]]=tmp;
                                  break;    }
                                  sort(b,b+k);
                                  k=0;
                                  for(j=i;j<strlen(a);j++)
                                  a[j]=b[k++]+48;
                                  break;
                                  }    
                                  flag=1;
      }
      if(flag)
      printf("%s\n",a);
      else
      printf("-1\n");
      }
      return 0;
      }
