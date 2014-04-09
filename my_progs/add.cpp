#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char a[200],b[200],c[200],d[200];
 
int add()
{
int low,high,carry=0,temp;
int alen=strlen(a),blen=strlen(b);
char swap;
alen--;
blen--;
int k=0;
while(alen>-1 && blen > -1)
      {
      temp=a[alen]+b[blen]+carry-96;        
      if(temp>9)
         {
         temp-=10;
         carry=1;       
         }       
         else carry=0;
      c[k++]=temp+48;
      alen--;
      blen--;        
      }    
while(alen > -1)
      {
      temp=a[alen]+carry-48;        
      if(temp>9)
         {
         temp-=10;
         carry=1;       
         }       
         else carry=0;
      c[k++]=temp+48;
      alen--;        
      }    
while(blen > -1)
      {
      temp=b[blen]+carry-48;        
      if(temp>9)
         {
         temp-=10;
         carry=1;       
         }       
         else carry=0;
      c[k++]=temp+48;
      blen--;        
      }    
c[k]='\0';    
low=0;high=k-1;
while(low<high)
      {
      swap=c[low];
      c[low]=c[high];
      c[high]=swap;         
      low++;
      high--;         
      }
return k;    
}
 
int sub()
{
int alen=strlen(a),blen=strlen(b),carry=0,temp;
int low,high;
char swap;    
int k=0;
alen--;
blen--;
while(alen>-1 && blen>-1)
      {
      temp=a[alen]-b[blen]-carry;
      if(temp<0)
         {
         temp+=10;
         carry=1;       
         }       
         else carry=0; 
      d[k++]=temp+48;      
      alen--;
      blen--;        
      }    
while(alen>-1)
      {
      temp=a[alen]-carry-48;
      if(temp<0)
         {
         temp+=10;
         carry=1;       
         }       
         else carry=0; 
      d[k++]=temp+48;      
      alen--;        
      }    
while(blen>-1)
      {
      temp=b[blen]-carry-48;
      if(temp<0)
         {
         temp+=10;
         carry=1;       
         }       
         else carry=0; 
      d[k++]=temp+48;      
      blen--;        
      }    
d[k]='\0';    
low=0;high=k-1;
while(low<high)
      {
      swap=d[low];
      d[low]=d[high];
      d[high]=swap;         
      low++;
      high--;         
      }
return k;    
}
 
void print(char* arr,int len)
{
int i=0;
while(i<len && arr[i] == '0')
     i++;     
printf("%s\n",arr+i);          
}
int main()
{
int clen,dlen,i;
   scanf("%s %s",a,b);
   clen = add();
   print(c,clen);
     if(strcmp(a,b)!='\0'){
    dlen = sub();
    print(d,dlen);}
    else
    printf("0");
    scanf("%d",&i);
return 0;    
}
 

