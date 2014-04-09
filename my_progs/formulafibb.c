#include<stdio.h>
#include<math.h>
main()
{
      int i,j,n;
      float phi,phi1,k;
scanf("%d",&n);
i=n-1;
phi = (1 + sqrt(5)) / 2;

while(i){
         phi=phi*phi;
         phi1=phi1*phi1;
         i--;}
        k = ( phi - phi1 ) / sqrt(5);
        printf("%f",k);
    getch();
}
        
