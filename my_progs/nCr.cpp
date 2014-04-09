#include<stdio.h>
char a[1000000];
int mult(int j,int i)
{
    int k,temp,carry=0;
    for(k=0;k<j;k++)
   { temp=(a[k]-'0')*i+carry;
    a[k]=temp%10+'0';
    carry=temp/10;}
    while(carry!=0)
    {
                   a[k++]=carry%10+'0';
                   carry=carry/10;
                   }
    return k;
}
int divide(int j,int i)
{
    int k;
    int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
                    temp=(a[k]-'0')+carry*10;
                    if(temp<1)
                    {
                              carry=temp;temp=0;
                              }
                              else
                              {
                                  carry=temp%i;
                                  temp=temp/i;
                              }
                              a[k]=temp+'0';
                    }
                    return carry;
}
main()
{
  int t,m,n,i,j,s,k;
  char temp;
  int p;
  scanf("%d",&t);
  while(t-->0){
     a[0]='1';j=1;
  scanf("%d%d",&m,&n);
          for(i=n+1;i<=m;i++)
          j=mult(j,i);
         for(i=0,k=j-1;i<j/2;i++,k--)
         {temp=a[i];a[i]=a[k];a[k]=temp;}
          for(i=2;i<=m-n;i++)
          divide(j,i);
          p=divide(j,142857);
         
          printf("%d\n",p);}
      return 0;
      }
