#include<stdio.h>

int a[6000];
int mult(int a[],int j,int i)
{
    int k,temp,carry=0;
    for(k=0;k<j;k++)
   { temp=a[k]*i+carry;
    a[k]=temp%10;
    carry=temp/10;}
    while(carry!=0)
    {
                   a[k++]=carry%10;
                   carry=carry/10;
                   }
    return k;
}
int divide(int a[],int j,int i)
{
    int k;
    int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
                    temp=a[k]+carry*10;
                    if(temp<1)
                    {
                              carry=temp;temp=0;
                              }
                              else
                              {
                                  carry=temp%i;
                                  temp=temp/i;
                              }
                              a[k]=temp;
                    }
                    return 0;
}
main()
{
  int t,m,n,i,temp,j,s,k;
  long long int p;
  scanf("%d",&t);
  while(t-->0){
               a[0]=1;j=1;i=0,p=0;
  scanf("%d%d",&m,&n);
  if(m-n>=n)
  {
         for(i=m-n+1;i<=m-1;i++)
          j=mult(a,j,i);
         for(i=0,k=j-1;i<j/2;i++,k--)
         {temp=a[i];a[i]=a[k];a[k]=temp;}
          for(i=2;i<=n-1;i++)
          divide(a,j,i);
          }
  else
  {
         for(i=n;i<=m-1;i++)
          j=mult(a,j,i);
             for(i=0,k=j-1;i<j/2;i++,k--)
         {temp=a[i];a[i]=a[k];a[k]=temp;}
             for(i=2;i<=m-n;i++)
  divide(a,j,i);    
                  }
                for(i=0;i<j;i++)
               p=p*10+a[i]; 
               printf("%lld\n",p);
                  }
      return 0;
      }
      


