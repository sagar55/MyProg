#include<stdio.h>
main()
{
      int a[10],t,max,j=1,i;
      char c[10][100];
      scanf("%d",&t);
      while(t)
      {
              for(i=0;i<10;i++)
               scanf("%s%d",c[i],&a[i]);
               max=a[0];
             for(i=1;i<10;i++)
             { if( a[i]>max)
                   max=a[i];
                   } 
                    printf("Case #%d:\n",j);      
                 for(i=0;i<10;i++)
                  {  
                        if(a[i]==max)
                        printf("%s\n",c[i]);
                        }
                        j++;
                        t--;
                        }
                        getch();
                        }
                        
