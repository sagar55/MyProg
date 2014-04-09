#include<stdio.h>
main()
{
      int t,n,sum=0,i,j,k,p;
      for(i=0;i<10;i++)
      {
                       scanf("%d",&n);
                       sum=sum+n;
                       if(sum>=100)
                       break;
                       }
                       i++;
                       while(i<10){scanf("%d",&p);i++;}
                       if(sum!=100){
      t=sum-n;
      j=100-t;
      k=sum-100;
      if(j<k)
      sum=t;
      }
      printf("%d",sum);
      getch();
      }
      

      
