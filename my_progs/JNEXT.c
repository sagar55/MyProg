#include<stdio.h>
#include<string.h>
char a[1000001];
int alen;
void f()
{
   int n=alen-1,flag=0,min=10,i,j,b[11]={0,0,0,0,0,0,0,0,0,0,0};
  while(n)
  {
       b[a[n]-48]++;
      
     if(a[n-1]<a[n])       
     {
     b[a[n-1]-48]++;
      
    flag=1;
    n--;
    break;
     }
    n--;
     }

     if(flag==1)
     {
                for(i=a[n]-48+1;i<10;i++)
                {
               if(b[i])
               {min=i;
                a[n]=min+48;
               b[i]--;
               break;
               }}
                
                 for(i=n+1;i<alen;i++)
                 {
                                     
                  for(j=0;j<10;j++)
                  {
                                    if(b[j]>0)
                     {
                            a[i]=j+48;
                     b[j]--;
                     break;
                     }
                     }
                     }
                     printf("%s\n",a);}
                     else
                     printf("-1\n");
}
main()
{
int t,clen,i,n;
scanf("%d",&t);
while(t--){
   scanf("%d",&alen);
   for(i=0;i<alen;i++){
                       scanf("%d",&n);
   a[i]=n+48;
}
   a[alen]='\0';
   f();
}
return 0;    
}
