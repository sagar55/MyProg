#include<stdio.h>
#include<string.h>
char a[200],b[200],c[200];
 
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
         if(alen==-1&&blen==-1&&carry!=0)
       c[k++]=carry+48;    
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
 main()
{
long long int clen,a,b,t,i;
scanf("%lld",&t);
while(t--){
   scanf("%lld %lld",&a,&b);
   printf("%lld\n",a+b);
}
return 0;    
}
 

