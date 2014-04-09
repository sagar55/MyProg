//To find a binary, octal & hexadecimal eq. of a decimal no.
#include<stdio.h>
main()
{
int n,i,j,k,b[20000],c[20];
char a[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'},d[10];
printf("enter the no. to find its binary, octal,hexadecimal equivalent\n");
scanf("%d",&n);
for(j=n,i=0;j>0;i++,j=j/2)
        b[i]=j%2;
        printf("binary eq. of a no. is\t");
      for(k=i-1;k>=0;k--)
        printf("%d",b[k]);
printf("\n\n");
for(j=n,i=0;j>0;i++,j=j/8)
        c[i]=j%8;
       printf("octal eq. of a no. is\t");
     for(k=i-1;k>=0;k--)
        printf("%d",c[k]);
printf("\n\n");
for(j=n,i=0;j>0;i++,j=j/16)
     {
        k=j%16;
        d[i]=a[k];
     }  
       printf("hexadecimal eq. of a no. is\t");
     for(k=i-1;k>=0;k--)
        printf("%c",d[k]);
        printf("\n\n");
getch();
} 
