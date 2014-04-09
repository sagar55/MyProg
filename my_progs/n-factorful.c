#include<stdio.h> 
#include<math.h>
int main() 
{ 
int n,i,t,count,count1,a,b,j,m;  
scanf("%d",&t); 
while(t){
scanf("%d%d%d",&a,&b,&m); 

count1=0;

while(a<=b) {
            n=a;
            j=0;
            count=0;
for(i=2;i<=n;i++) 
{ 
if(n%i==0) 
{         
if(i!=j)
count++;
j=i;
n=n/i; 
i--; 
if(n==1) 
break; 
}
}
a++;
if(count==m)
count1++; }
printf("%d\n",count1);
t--;}
getch();
}

