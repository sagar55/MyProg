#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int largestArea(int arr[], int len)
{
int area[len]; //initialize it to 0
int n, i, t;
stack<int> St;  //include stack for using this #include<stack>
bool done;

for (i=0; i<len; i++)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
        cout<<"1:"<<St.top()<<" "<<i<<" "<<endl;
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = -1;
else{
   t = St.top();
cout<<"2:"<<St.top()<<endl;
}
//Calculating Li
area[i] = i - t - 1;
St.push(i);
cout<<"3:"<<area[i]<<" "<<i<<" "<<t<<endl;
}

//clearing stack for finding Ri
while (!St.empty()){
    cout<<"4:"<<St.top()<<endl;
St.pop();}

for (i=len-1; i>=0; i--)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
        cout<<"5:"<<St.top()<<" "<<i<<" "<<endl;
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = len;
else{
   t = St.top();
cout<<"6:"<<St.top()<<endl;
}
//calculating Ri, after this step area[i] = Li + Ri
area[i] += t - i -1;
St.push(i);

cout<<"7:"<<area[i]<<" "<<i<<" "<<t<<endl;
}

int max = 0;
//Calculating Area[i] and find max Area
for (i=0; i<len; i++)
{
area[i] = arr[i] * (area[i] + 1);
if (area[i] > max)
   max = area[i];
}

return max;
}

main()
{
int t=10;
while(t--)
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("%d\n",largestArea(a,n));
}
return 0;
}
            
