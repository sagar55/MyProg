//delete the element in a array at kth position
main()
{
int a[20],i,n,val,pos;
printf("how many no. you want to enter\t");
scanf("%d",&n);
printf("\n enter those numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nnow enter the no. you want to delete from above numbers\t");
scanf("%d",&val);
printf("\nalso specify the position at which you delete the above no.\t");
scanf("%d",&pos);
if(pos>n)
printf("invalid command");
else
{
n=delete(a,n,val,pos);
printf("now new array of numbers is\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
getch();
}
int delete(int a[],int n,int val,int k)
{
    int i;
    if(a[k-1]!=val)
    {
    printf("%d is not at position %d\n",val,k);
    return n;
    }
    else
    {
           for(i=k-1;i<n-1;i++)
             a[i]=a[i+1];
           n=n-1;
           return n;
    }
}
 
