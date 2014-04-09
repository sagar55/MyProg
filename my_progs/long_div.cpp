#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char c[200];
int n;
void divbyn(char arr[],int len,int n)
{
int i=0,carry=0,temp;     
while(i<len && arr[i] == '0')
     i++;     
while(i<len)
      {      
      temp=carry*10 + arr[i]-48;             
      if(temp>1)
         {
         carry=temp%n;       
         temp/=n;  
      
         }       
         else 
           {
           carry=temp;
           temp=0; 
              
           }     
      arr[i]=temp+48;
     
       
      i++;   
      }     
}
void print(char* arr,int len)
{
int i=0;
while(i<len && arr[i] == '0')
     i++;   
     if(i==len)
     printf("0\n");
     else  
printf("%s\n",arr+i);          
}
int main()
{
   scanf("%s %d",c,&n);
    divbyn(c,strlen(c),n);
    print(c,strlen(c));
    scanf("%d",&n);
        return 0;
}
