#include<vector>
#include<stdio.h>
#include<stack>
using namespace std;
long long int  largestArea(long long int  arr[], long long int  len)
{
long long int  area[len]; //initialize it to 0
long long int  n, i, t;
stack<long long int > St;  //include stack for using this #include<stack>
bool done;

for (i=0; i<len; i++)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = -1;
else
   t = St.top();
//Calculating Li
area[i] = i - t - 1;
St.push(i);
}

//clearing stack for finding Ri
while (!St.empty())
St.pop();

for (i=len-1; i>=0; i--)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = len;
else
   t = St.top();
//calculating Ri, after this step area[i] = Li + Ri
area[i] += t - i -1;
St.push(i);
}

long long int  max = 0;
//Calculating Area[i] and find max Area
for (i=0; i<len; i++)
{
area[i] = arr[i] * (area[i] + 1);
if (area[i] > max)
   max = area[i];
}

return max;
}


 int  main()
{
    
    long long int  i,h,a[100001];

            freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
        
    scanf("%lld",&h);
    while(h!=0)
    {  for(i=0;i<h;i++)
       scanf("%lld",&a[i]);
       printf("%lld\n",largestArea(a,h));
       scanf("%lld",&h);}
    return 0;
}
