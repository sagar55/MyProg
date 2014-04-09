#include<stdio.h>
int mul(int a[],int n,int p)
{
          int m=0,i,j,temp=0,index=0,x;
          while(m!=p)                           
          {                                    
           x=a[index]*n+temp; 
           a[index]=x%10;
           temp=x/10;
           index=++m;
           }
                     while(temp>0)
                     {
                     a[index]=temp%10;
                     temp=temp/10;
                     index=++m;
                     }
                     return index;}
main()
{
    int a[10000],m,p,i,j,n,t,index;
    char c[100000];
    scanf("%d",&t);
    while(t){    
    scanf("%d",&n);
    if(n%2==0)
    { n=n/2;
    p=n+1;}
     else{
    p=(n+1)/2;}
    if(n!=0&&p!=0){
     m=n;
     i=0;
    while(n>0)
    {
       a[i]=n%10;
       n=n/10;
       i++;}
    j=p;
    index=mul(a,j,i);
        i=index;
          for(i=index-1,j=0;i>=0;i--,j++){
    c[j]=a[i]+48;
    }
    c[index]='\0';
    printf("%s\n",c);}else
    printf("%d\n",p*m);t--;}
    getch();
}
        
                                    
              
      
                     
                                  
                                  
                                                                      
