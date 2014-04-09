#include<stdio.h>
#include<stdbool.h>
int arr[350][350];
int value[350][350],i,j,n;
char cheak[350][350];
char hack[350][350];
int primes[664579];
bool numbers[10000001];
void connected(int p,int q)
{
     hack[p][q]='1';
     if(cheak[p][q]=='e')
     {
         if( p+1<n && hack[p+1][q]!='1' && cheak[p+1][q]=='e')
             connected(p+1,q);
         if(p-1>=0 &&hack[p-1][q]!='1' && cheak[p-1][q]=='e')
             connected(p-1,q);
         if(q+1<n && hack[p][q+1]!='1' &&cheak[p][q+1]=='e')
             connected(p,q+1);
         if(q-1>=0 &&hack[p][q-1]!='1' && cheak[p][q-1]=='e')
             connected(p,q-1);
     }
     else
     if(cheak[p][q]=='o')
     {
         if(p+1<n && hack[p+1][q]!='1' &&cheak[p+1][q]=='o')
             connected(p+1,q);
         if(p-1>=0 && hack[p-1][q]!='1' && cheak[p-1][q]=='o')
             connected(p-1,q);
         if(q+1<n && hack[p][q+1]!='1' &&cheak[p][q+1]=='o')
             connected(p,q+1);
         if(q-1>=0 && hack[p][q-1]!='1' &&cheak[p][q-1]=='o')
             connected(p,q-1);
     }
}
int isprime(int n,int lb,int ub)
{
    if(numbers[n]==0)
        return 0;
    int mid;
     while(lb<=ub)
     {
         mid=(ub+lb)/2;
         if(primes[mid]==n)
         {
             value[i][j]=mid;
             return 1;
         }
         if(n>primes[mid])
              lb=mid+1;
         else
             ub=mid-1;
     }
}
int main()
{
    int t,error=0;
    int k;
    for(i=0;i<=10000000;i++)
        numbers[i]=1;
    //FILE *p;
        //p=fopen("out.txt","w");
    numbers[0]=numbers[1]=0;
    for(i=2;i<=10000000;i++)
        if(numbers[i]!=0)
            for(j=i*2,k=2;j<=10000000;j=i*k)
            {
                numbers[j]=0;
                k++;
            }
    for (i=0,j=0;i<=10000000;i++)
        if (numbers[i]==1)
            primes[j++]=i;
    //for (i=0;i<664579;i++)
        //fprintf(p,"%d\n",primes[i]);

     scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for(i=0;i<n;i++)
              {
                   for(j=0;j<n;j++)
                   {
                       scanf("%d",&arr[i][j]);
                       hack[i][j]='0';
                       if(isprime(arr[i][j],0,664578))
                            cheak[i][j]='p';
                       else
                       if(arr[i][j]%2==0)
                           cheak[i][j]='e';
                       else
                           cheak[i][j]='o';
                   }
              }
              error=0;
              for(i=0;i<n;i++)
              {
                   for(j=0;j<n;j++)
                   {
                       if(cheak[i][j]=='p')
                       {
                           error+=value[i][j];
                       }
                       if(cheak[i][j]=='e' && hack[i][j]=='0')
                       {
                            error=error + arr[i][j]/2;
                            connected(i,j);
                       }
                       if(cheak[i][j]=='o' && hack[i][j]=='0')
                       {
                            error=error + arr[i][j]/2+2;
                            connected(i,j);

                       }
                   }
              }
              printf("%d\n",error);
    }
    //getch();
    return 0;
}
