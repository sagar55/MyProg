#include<stdio.h>
main()
{
      int i,count;
      float m,n,j;
      scanf("%f",&n);
      while(n!=0.00)
      {
                    j=2;
                    m=1/j;
                    j++;
                    while(m<n)
                    {   m=m+1/j;
                    j++;
                    }
     printf("%.0f card(s)\n",j-2);
       scanf("%f",&n);
     }                
     getch();
     }    
