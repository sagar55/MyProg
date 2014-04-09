#include<stdio.h>
#include <stack>
#include<math.h>
using namespace std;
char afff[1000];
int bfff[1000],c[2000];
int jhjhgg=1,h=0;
void f(int n)
{
      int tyuh,i,j,k;
      for(j=n,i=0;j>0;i++,j=j/2)
        c[i]=j%2;
        for(k=0;k<i/2;k++){
         tyuh=c[k];
         c[k]=c[i-k-1];
         c[i-k-1]=tyuh;
         }
        }
void sool(int l,int cnt)
{
     
       int jhgf,i,jhjhggag2=0,t;
        stack<char> s;
       long long int loop=pow(2,cnt),n=0;
       while(!jhjhggag2&&n<loop){
                             //printf("hi\n");
                    t=0; 
                    jhjhggag=0;         
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
        jhjhggag=1;
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
        jhjhggag=1;
        break;
        }
        else 
        s.pop();
        }
        }
        }
        if(jhjhggag==0&&s.empty()==1)
        jhjhggag2=1;
        else
         n++;
         }
         if(jhjhggag2)
            printf("Case #%d: YES\n",jhjhgg++);
       else     
    printf("Case #%d: NO\n",jhjhgg++);
}
main()
{
      int x,l,jhjhggag,count,i;
     freopen("input1.txt","r",stdin);
     freopen("output.txt","w",stdout);
      scanf("%d\n",&x);
      while(x--)
      {
                jhjhggag=0;
                count=0;
                gets(a);
                l=strlen(a);
                for(i=0;i<l;i++){
       if((a[i]>96&&a[i]<123)||a[i]==':'||a[i]==32||a[i]=='('||a[i]==')')
       continue;
       else
       jhjhggag=1;
       }
     c[0]=0;b[0]=0;
       if(jhjhggag)
       printf("Case #%d: :NO\n",jhjhgg++);
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
