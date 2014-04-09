
#include<stdio.h>
#include<math.h>
int p=0;
main()
{
      int i,n;
      scanf("%d",&n);
      for(i=4;i<=n;i++){
      f(i);
      }
      printf("%d",p+n);
      getch();
      }
      f(int i)
      {
            int m,j;
            m=sqrt(i);
            for(j=2;j<=m;j++){
            if(i%j==0)
            p++;
            }
            }
            
      
