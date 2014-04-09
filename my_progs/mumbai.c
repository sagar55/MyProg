#include<stdio.h>
main()
{
      int a[100000]={0,1},i,k,j;
      for(i=2;i<28660;i*=2)
      a[i]=3*a[i/2];
      i=1;
     while(i<28660)
      {
                          if((i&i-1)==0)
                          {
                                i++;
                                      }
                                      else
                                      {
                                         j=i+4;
                                         if((j&j-1)==0)
                                         a[j]=2*a[i];
                                         j++;
                                         i++;
                                            }
                                            }
                          
      printf("%d %d %d %d %d %d\n",i,a[2],a[4],a[8],a[16],a[32]);
      getch();
      }
