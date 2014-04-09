#include<stdio.h>
main()
{
    int i,n,k,j=0,l,r,min=100000,max=0,p,a[10001],cnt;
    scanf("%d%d%d",&n,&k,&r);
   for(i=0;i<n*k;i++)
    {    scanf("%d",&a[i]);
    if(a[i]<min)
    min=a[i];
    if(a[i]>max)
    max=a[i];
}
for(i=1;i<n*k;i++)
   if((a[i]-a[i-1])%r!=0)
   {
        printf("-1\n");
        return 0;
    }
    else
    {
    j=min;
     min=100000;
    for(i=j;i<=max;i+=r){
   cnt=0;
   for(p=0;p<n*k;p++)
    cnt=cnt+(abs(i-a[p]))/r;
    if(cnt<min)
    min=cnt;
}
printf("%d\n",min);
}
    
return 0;
}
