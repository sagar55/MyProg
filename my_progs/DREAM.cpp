#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int a[100000],k,n,b[100000];
int f1()
{
    int q=0,l,e;
    for(int w=0;w<k-1;w++)
      b[w]=a[w];
      l=0;
                sort(b,b+k-1);
                while(l<k-2)
                {if(b[l]==b[l+1])
                {q++;}
                l++;}
                    return q;
    }
int f2()
{
    int q=0,l;
    for(int w=n-k+1;w<n;w++)
      b[w]=a[w];
      l=n-k+1;
                sort(b+n-k+1,b+n);
                while(l<n-1)
                {if(b[l]==b[l+1])
                {q++;}
                l++;}
    return q;
    }
int no_of_dup(int i)
{
    int q=0,l,j;
    for(j=i;j<=n-k;)
      {    for(int w=j;w<j+k;w++)
              b[w]=a[w];
           sort(b+j,b+j+k);
      l=j;
              while(l<j+k-1)
              {if(b[l]==b[l+1])
                {q++;}
                l++;} 
                j=j+k;
                }
                if(i>1&&i<k)
              q=q+f1(); 
                if((n-j)<k&&(n-j)>1)
             q=q+f2();
      return n-q;        
} 
main()
{
      int i,j=0,sum,min;
      scanf("%d%d",&n,&k);
      min=n;
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
       while(j<=n-k)
         { 
            sum=no_of_dup(j++);
            if(sum<min)
            min=sum;
           }
           printf("%d\n",min);
           system("pause");
           } 
           
           
