//reverse of each no.of an array using pointer
#include<stdio.h>
void reverse(int *i)
{
            int j=*i,n=0;
            while(j>0)
            {
            n=j%10+n*10;
            j=j/10;  
            }
            *i=n;
}
main()
{
      int a[10],i,n; 
      printf("how many numbers would you like to enter\t");
      scanf("%d",&n);
      printf("enter the numbers\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("reverse of each no.is\n");
      for(i=0;i<n;i++)
      {
                       reverse(&a[i]);
                       printf("%d\n",a[i]);
      }
getch();
}

      
