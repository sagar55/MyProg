//
#include<stdio.h>
int a[20],n;
print()
{
    int i;
    freopen("input.txt","a",stdout);
 for(i=1;i<=n;i++)
 printf("%d ",a[i]);
 printf("\n");   
}
swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
    
perm(int k)
{
    int i;
    if(k==n)
    print();
    else
    {
        for(i=k;i<=n;i++)
        {
            swap(&a[i],&a[k]);
            perm(k+1);
            swap(&a[i],&a[k]);
        }
    }
}
main()
{
    int i;
    for(i=1;i<=10;i++)
    a[i]=i;
    scanf("%d",&n);
    perm(1);
    getch();
}
