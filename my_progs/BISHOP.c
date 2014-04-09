#include<stdio.h>
#include<string.h>
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
    int a[1000],m,p,i,j,n,index,k,l,q,flag;
    char c[100000],b[1000];
     
    while(scanf("%s",b)!=EOF){
    i=strlen(b);
    k=0;
    while(b[k]=='0'){k++;}
    if(k==i)
    printf("0\n");
    else{
     for(k=i-1,l=0;k>=0;k--,l++){
    a[l]=b[k]-48;
    }
    p=2;
    j=p;
    index=mul(a,j,i);
        i=index;
          for(i=index-1,j=0;i>=0;i--,j++){
    c[j]=a[i]+48;
    }
    c[index]='\0';
    k=index-1;
    if(c[k]=='0')
    {     c[k]='8';
    k--;
                        while(c[k]=='0'){
                        c[k]='9';
                        k--;}
                        c[k]=c[k]-1;}
                        else
                        { c[k]=c[k]-2;}
                        k=0;
                        flag=0;
        while(c[k]=='0'){k++;flag=1;}
        if(k==index)
        printf("1\n"); 
        else if(k<index&&flag==1)
        { q=0;
             while(k!=index){
            c[q]=c[k];
            q++;k++;}
            c[q]='\0';
             printf("%s\n",c);
            }
        else
    printf("%s\n",c);}
    }
    return 0;
}
        
                                    
              
      
                     
                                  
                                  
                                                                      
