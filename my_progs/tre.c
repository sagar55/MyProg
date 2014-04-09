#include<stdio.h>
int max(int x, int y)
{ return (y > x)? y : x; }
 int la,ra;
int f(int numbers[], int n)
{
   int max_so_far  = numbers[0], max_ending_here = numbers[0],i,sum=0;
 
        int l=0,r=0;
		la=0,ra=0;
        for( i = 1; i < n; i++)
        {
               if(max_ending_here < 0)
                {
                        max_ending_here = numbers[i];
                        l=i;
                        r=i;
 					
                }
                else
                {
                        max_ending_here += numbers[i];
                        r++;
                }
 
                // calculate max_so_far
                if(max_ending_here >= max_so_far )
                {
                        max_so_far  = max_ending_here;
 						la=l;
 						ra=r;
                }
        }
        for(i=la;i<=ra;i++)
        sum+=numbers[i];
        if(sum<0)
        return 0;
        else 
		return 1;
      
}
 
main()
{
int n,t,i,j,a[100005];
long long sum;
long long rr,cc;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
a[i]*=-1;}
sum=0;
if(!f(a,n))
{
for(i=0;i<n;i++)
sum+=(long long)a[i];
printf("%lld\n",-1*sum);
}
else
{
for(i=0;i<la;i++)
sum+=(long long)a[i];
for(i=ra+1;i<n;i++)
sum+=(long long)a[i];
sum*=-1;
for(i=la;i<=ra;i++)
sum+=(long long)a[i];
printf("%lld\n",sum);
}
}
return 0;

}
