#include<stdio.h>
int a[1000005],temp[1000005]={1};
main()
{
    int t,max=1,i,str=0;
    scanf("%d",&t);
    scanf("%d",&a[0]);
   for(i=1;i<t;i++)
   {
        scanf("%d",&a[i]);
        if(a[i]>=a[i-1])
        temp[i]=temp[i-1]+1;
        else
        temp[i]=1;
        if(temp[i]>max)
        {
            max=temp[i];
            str=i;
        }
    }
    for(i=1;i<=max;i++)
    {
     printf("%d ",a[str-max+i]);   
    }
    getch();
return 0;
}
