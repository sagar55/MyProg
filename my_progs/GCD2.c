char a[3000];
int divide(int j,int i)
{
    int k;
    int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
temp=(a[k]-48)+carry*10;
if(temp<1)
{
carry=temp;temp=0;
}
else
{
carry=temp%i;
temp=temp/i;
}
}
return carry;
}
int gcd(int c,int b)
{
    if(b==0)return c;
    else 
    return gcd(b,c%b);
}
main()
{
int t,m,b,i;
scanf("%d",&t);
while(t-->0)
      {scanf("%d%s",&m,a);if(m==0)puts(a);else{i=strlen(a);b=divide(i,m);
      printf("%d\n",b);b=gcd(m,b);printf("%d\n",b);
    }
}
return 0;
      }

