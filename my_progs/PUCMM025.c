#include<stdio.h>
char a[250];
int divide(int j,int i)
{
    int k;
    int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
temp=(a[k]-48)+carry*10;
if(temp<1)
{
carry=temp;temp=0;
}
else
{
carry=temp%i;
temp=temp/i;
}
}
return carry;
}
main()
{
      int t,n,i,j,b[11]={0},sum,count,num;
      while(scanf("%s",a)!=EOF)
         {
                                 sum=0;count=0;
                                 for(i=1;i<10;i++)
                                 b[i]=0;
                                
                n=strlen(a);
                if(n==1)
                {   if(a[0]!='0')
                 count=1;
                 }
               else  if(n==2)
              { num=(a[0]-48)*10+a[1]-48;
              if(a[0]!='0'&&num%(a[0]-48)==0)
              count++;
              if(a[1]!='0'&&num%(a[1]-48)==0)
              count++;}else{
                for(i=0;i<n;i++)
            { sum+=a[i]-48;      b[a[i]-48]++;}
               for(i=1;i<10;i++)             
                   {
                                             if(b[i])
                                   { if(i==1)
                                     count+=b[i];
                                     else if(i==2)
                                     { if((a[n-1]-48)%2==0 )
                                      count+=b[i];}
                                      else if(i==3)
                                      { if(sum%3==0)
                                       count+=b[i];}
                                       else if(i==4)
                                      { num=(a[n-2]-48)*10+a[n-1]-48;
                                       if(num%4==0)
                                       count+=b[i];}
                                       else if(i==5)
                                      { if(a[n-1]=='0'||a[n-1]=='5')
                                       count+=b[i];}    
                                       else if(i==6)
                                       {
                                            if((a[n-1]-48)%2==0 &&  sum%3==0)
                                            count+=b[i];}
                                       else if(i==7)
                                     {   if(!divide(n,7))
                                     count+=b[i];}
                                     else if(i==8)
                                     {if(!divide(n,8))
                                     count+=b[i];}
                                     else if(i==9)
                                     { if(sum%9==0)
                                       count+=b[i];}
                                       }
                                       }}
                                       printf("%d\n",count);
                                       }
                                       return 0;
                                       }
