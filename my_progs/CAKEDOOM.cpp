#include<iostream>
#include<string.h>
     int n;
int check(char b[],int l)
   {
       int i,flag=0;
       for(i=0;i<l;i++)
       { if((b[i]==b[i+1]&&b[i]!='?'&&b[i+1]!='?')||(b[i]-48>=n&&b[i]!='?'))
             {   flag=1;
               break;
             }
             }
             if((i==l&&flag==0&&b[l-1]==b[0]&&l!=1&&b[l-1]!='?')||(b[i]-48>=n&&b[i]!='?'))
             {
               flag=1;}
             if(flag==1)
             return 1;
             else 
             return 0;
             }
main()
{
       int i,j,t,l,q,count,f,a[12],k;
      char b[102];
    
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                scanf("%s",b);
                l=strlen(b);
                q=check(b,l);
                for(i=0;b[i]=='?';i++);
                if((n==2&&i>1&&i%2==0&&b[i]==49)||(n==2&&i>1&&i%2!=0&&b[i]==48))
                b[0]=49;
                if(q==1)
                printf("NO\n");
                else
                {
                    count=0;
                    f=0;
                    for(i=0;i<10;i++)
                     a[i]=0;
                    for(i=0;i<l;i++)
                     {
                             if(b[i]!='?')       
                            {j=b[i]-48;
                            if(a[j]==0)
                             { a[j]=1;
                             count++;
                              }}}
                               if(b[0]=='?')
                                  { 
                                                for(k=0;k<n;k++)
                                                {
                                                if(count<n&&b[1]!=k+48&&b[l-1]!=k+48)
                                                { b[0]=k+48;
                     
                                                    if(a[k]==0){
                                                   a[k]=1;
                                                   count++;
                                                  }
                                                break;
                                                }
                                                else if(count==n&&a[k]==1&&b[1]!=k+48&&b[l-1]!=k+48)
                                                {
                                                     b[0]=k+48;
                                                     break;}}
                                                     if(b[0]=='?')
                            {                      
                                                     f=1; }}
                                                     

                                     
                   for(i=1;i<l-1;i++)
                   {
                                   if(b[i]=='?')
                                   {
                                                for(k=0;k<n;k++)
                                                {
                                                                
                                                if(count<n&&b[i-1]!=k+48&&b[i+1]!=k+48)
                                                { 
                                                                                         b[i]=k+48;
                                                    if(a[k]==0){
                                                   a[k]=1;
                                                   count++;}
                                                break;
                                                }
                                                else if(count==n&&a[k]==1&&b[i-1]!=k+48&&b[i+1]!=k+48)
                                                {
                                                     b[i]=k+48; break;}}
                                                     if(b[i]=='?')
                                                     {                  
                                                                  f=1;
                                                     break;}}
                                                     }
                                                      if(b[l-1]=='?')
                                  { 
                                                for(k=0;k<n;k++)
                                                {
                                                if(count<n&&b[0]!=k+48&&b[l-2]!=k+48)
                                                { b[l-1]=k+48;
                                                    if(a[k]==0){
                                                   a[k]=1;
                                                   count++;}
                                                break;
                                                }
                                                else if(count==n&&a[k]==1&&b[0]!=k+48&&b[l-2]!=k+48)
                                                {
                                                     b[l-1]=k+48;
                                                     break;}}
                                                     if(b[l-1]=='?')
                                                     {f=1;
                                                    }}
                                                     if(f==1)
                                                           printf("NO\n");
                                                    else
                                                     printf("%s\n",b); }}                                            
                return 0;
                }
   
             
       
