#include<stdio.h>
#include<string.h>
char a[251];
int alen;
main()
{
int t,clen,i,n,j;
scanf("%d",&t);
while(t--){
   scanf("%s",a);
   alen=strlen(a);
   for(i=alen-1;i>=0;i--)
   {
   if(a[i]=='4')
   break;
   }
   if(i!=-1)
   { a[i]='7';
     for(j=i+1;j<alen;j++)
      a[j]='4';
      }
      else
      { for(i=0;i<=alen;i++)
        a[i]='4';
        a[i]='\0';
        }
        printf("%s\n",a);
}
return 0;    
}
