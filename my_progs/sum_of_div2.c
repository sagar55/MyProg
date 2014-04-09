#include<stdio.h> 
#include<math.h>
int d[100]={0};
main() 
{ 
int n,i,k,sum;  
printf("Enter a Number:"); 
scanf("%d",&n);  
k=0;
for(i=2;i<=n;i++) 
{ 
if(n%i==0) 
{         if(d[k]!=i)   
           {k=k+2;
            d[k]=i;
           d[k+1]++;}
           else
           d[k+1]++;
n=n/i; 
i--; 
if(n==1) 
break; 
} 
}sum=1;
for(i=2;i<=(k+1);i=i+2){
n=pow(d[i],d[i+1]+1);
      sum=sum*((n-1)/(d[i]-1));
                 }printf("%d\n",sum);
getch();
}

