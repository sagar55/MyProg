#include<stdio.h>
main()
{
      int n,c=0,j=0,i=0,k,l;float sum=1,q,a[10001],key,d[10001]={0};
      char b[4];
     scanf("%d",&n);
     for(k=0;k<n;k++)
     {scanf("%s",b);
if(b[2]=='2'){q=1.00/2;a[i]=q;i++;}
if(b[0]=='3'){q=3.00/4;d[j]=q;j++;}
if(b[2]=='4'&& b[0]=='1'){q=1.00/4;d[j]=q;j++;}
        }
        for(k=1;k<j;k++)                         
            {
                   key=d[k];
                   l=k-1;
                   while(l>=0&&d[l]>key)
                   {
                                        d[l+1]=d[l];
                                        l=l-1;
                   }
                   d[l+1]=key;
            }
for(k=0;k<i;k++){
                 sum=sum+a[k];
                if(sum>1)
                { c++;  
                sum=a[k];}}
                if(sum<=1&&d[0]==0.75)
                 c=c+j;
                 else{
                for(k=0;k<j;k++){
                 sum=sum+d[k];
                if(sum>1)
                { c++;  
                sum=sum-1;}
                if(sum==1&&d[k+1]==0.75)
                { c=c+j-k-1;
                 break;}
                 }}
                printf("%d\n",c+1); 
     getch();
      }
