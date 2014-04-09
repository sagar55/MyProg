#include<stdio.h>
#include<string.h>
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
 void divby2(char arr[],int len)
{
int i=0,carry=0,temp;     
while(i<len && arr[i] == '0')
     i++;     
while(i<len)
      {      
      temp=carry*10 + arr[i]-48;             
      if(temp>1)
         {
         carry=temp%2;       
         temp/=2;  
      
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
int clen,dlen,i;
for(i=0;i<10;i++){
   scanf("%s %s",a,b);
   clen = add();
   divby2(c,clen);
   print(c,clen);
    dlen = sub();
    divby2(d,clen);
    print(d,dlen);}
return 0;    
}
 
