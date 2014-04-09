#include<stdio.h>
int mul(char a[],int n,int p)
{
          int m=0,i,j,temp=0,index=0,x;
          while(m!=p)                           
          {                                    
           x=(a[index]-48)*n+temp; 
           a[index]=x%10+48;
           temp=x/10;
           index=++m;
           }
                     while(temp>0)
                     {
                     a[index]=temp%10+48;
                     temp=temp/10;
                     index=++m;
                     }
                     return index;}
main()
{
    int m,p,i,j,n,t,index;
    char a[100000];
    scanf("%d",&t);
    while(t){    
    scanf("%d%d",&n,&p);
    if(n!=0&&p!=0){
     m=n;
     i=0;
    while(n>0)
    {
       a[i]=n%10+48;
       n=n/10;
       i++;}
    j=p;
    index=mul(a,j,i);
    a[index]='\0';
    strrev(a);
    printf("%s\n",a);}
    else
    printf("%d\n",p*m);t--;}
    getch();
}
        
                                    
              
      
                     
                                  
                                  
                                                                      
