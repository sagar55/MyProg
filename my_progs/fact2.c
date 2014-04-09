#include<stdio.h>

main()
{
      char a[10000];
      int n,p=0,k=0,j,i,q;
      for(i=0;i<10000;i++)
      a[i]=0;
      a[9997]=1;
      for(j=9999,q=99;j>=9997-(k+2);j--,q--)
      {         
            n=q*a[j]+p;
            if(n>9)
             {
             a[j]=n%10;
             p=n/10;
             k++;
             }      
             else{
             a[j]=n;
             k++;}
       }
       printf("%s",a);
       getch();
       }      
                   
      
      
                                            
