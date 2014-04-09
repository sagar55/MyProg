//insert the element in a array at kth position
#include<stdio.h>
main()
{
int a[20],i,n,val,pos;
printf("how many no. you want to enter\t");
scanf("%d",&n);
printf("\n enter those numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nnow enter the no. you want to insert in between above numbers\t");
scanf("%d",&val);
printf("\nalso specify the position at whivh you insert the above no.\t");
scanf("%d",&pos);
insert(a,n,val,pos);
printf("now new array of numbers is\n");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
getch();
} 
insert(int a[],int n,int val,int k)
{
    int i;
           for(i=n;i<=k;i--)
             a[i]=a[i-1];
           a[k-1]=val;
}




