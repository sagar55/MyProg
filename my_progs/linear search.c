//linear search of a string
#include<stdio.h>
main()

{char a[20][12],b[20];
int i,n,c=0;
printf("enter the no of elenents in the list ");
scanf("%d",&n);
for(i=0;i<n;i++) 
{ printf("enter %d string ",i+1);
fflush(stdin);
gets(a[i]);
}
printf("enter the item to be searched ");
gets(b);
for(i=0;i<n;i++) 
{
  if(strcmp(a[i],b)==0) 
    { printf("\n found at %d",i+1);            
      c=c+1;  }  
}
if(c==0)
{printf("not found");}
getch();
}           
