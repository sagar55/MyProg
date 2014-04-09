#include<stdio.h>
#include<stdbool.h>
bool a[10001];
void f(int n)
{
      
      int m,i,j,t,k=2,l;
       for(l=0;l<=n;l++)
          a[l]=0;
          a[1]=1;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
                                 }
int ispal(char s[],int p,int q)
{
int i;
for(i=p;i<=(p+q)/2;i++)
{if(s[i]==s[p+q-i])
continue;
else
return 0;
}
return 1;
}
main()
{
      int t,l,i,j,max;
      char s[1001];
      f(1005);
scanf("%d",&t);
while(t--)
{
          max=1;
          scanf("%s",s);
          l=strlen(s);
          for(i=0;i<l;i++)
            for(j=i+1;j<l;j++)
            if(ispal(s,i,j))
            {  if((j-i+1)>max)
            max=j-i+1;
            }
           // printf("%d\n",max);
            if(a[max]==0)
            printf("YES\n");
            else
            printf("NO\n");
            }
            return 0;
            }
            
            
