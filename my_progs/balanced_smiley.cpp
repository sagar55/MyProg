#include<stdio.h>
#include <stack>
#include<math.h>
using namespace std;
char a[105];
int b[105],c[50];
int fl=1,h=0;
void f(int n)
{
      int tmp,i,j,k;
      for(j=n,i=0;j>0;i++,j=j/2)
        c[i]=j%2;
        for(k=0;k<i/2;k++){
         tmp=c[k];
         c[k]=c[i-k-1];
         c[i-k-1]=tmp;
         }
        /* for(k=0;k<i;k++)
         printf("%d",c[k]);
         printf("\n");*/
        }
void solve(int l,int cnt)
{
     
       int flag,i,flag2=0,t;
        stack<char> s;
       long long int loop=pow(2,cnt),n=0;
       while(!flag2&&n<loop){
                             //printf("hi\n");
                    t=0; 
                    flag=0;         
                    f(n);
       while(!s.empty())
       s.pop();
       
       for(i=0;i<l;i++)
       {       
       if(b[i]){
       if(a[i]=='('){
       if(!c[t++])
       s.push(a[i]);
       }
    //printf("%c \n",s.top());}
    else if(a[i]==')')
        {  
            if(!c[t++])
            {
        if(s.empty()==1)
        {
        flag=1;
        break;
        }
        else 
        s.pop();
        }
        }
        }
        else
        {
           
        if(a[i]=='(')
           s.push(a[i]);
         else if(a[i]==')') 
         {
              if(s.empty()==1)
        {
        flag=1;
        break;
        }
        else 
        s.pop();
        }
        }
        }
        if(flag==0&&s.empty()==1)
        flag2=1;
        else
         n++;
         }
         if(flag2)
            printf("Case #%d: YES\n",fl++);
       else     
    printf("Case #%d: NO\n",fl++);
}
main()
{
      int x,l,flag,count,i;
     //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
      scanf("%d\n",&x);
      while(x--)
      {
                flag=0;
                count=0;
                gets(a);
                l=strlen(a);
                for(i=0;i<l;i++){
       if((a[i]>96&&a[i]<123)||a[i]==':'||a[i]==32||a[i]=='('||a[i]==')')
       continue;
       else
       flag=1;
       }
     c[0]=0;b[0]=0;
       if(flag)
       printf("Case #%d: NO\n",fl++);
       else{
            for(i=1;i<l;i++){
                     b[i]=0;
                      c[i]=0; 
            if((a[i]==')'||a[i]=='(')&&(a[i-1]==':')){
            b[i]=1;
            count++;
            }
            //printf("c[i]=%d  ",c[i]);
            }
            //printf("now slove\n");
        solve(l,count);
                }
                }
                return 0;
                }
