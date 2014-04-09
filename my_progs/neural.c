#include<stdio.h>
int a[6][6];
int p=0;
print()
{
    int i,j;
    printf("a%d=[\n",p++);
    for(i=0;i<6;i++){
    for(j=0;j<6;j++)
    printf("%d ",a[i][j]);
    printf("\n");
}
printf("];\n");
}
main()
{
    int i,j;
    freopen("out.txt","w",stdout);
    for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    scanf("%d",&a[i][j]);
    for(i=1;i<5;i++)
    for(j=1;j<5;j++)
    {
        a[i-1][j]=!a[i-1][j];
        print();
        a[i-1][j]=!a[i-1][j];
        a[i+1][j]=!a[i+1][j];
        print();
        a[i+1][j]=!a[i+1][j];
        a[i][j-1]=!a[i][j-1];
        print();
        a[i][j-1]=!a[i][j-1];
        a[i][j+1]=!a[i][j+1];
        print();
        a[i][j+1]=!a[i][j+1];
        a[i][j]=!a[i][j];
        print();
        a[i][j]=!a[i][j];
}
return 0;
}
