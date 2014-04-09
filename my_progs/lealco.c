#include<stdio.h>
int c[20],a[20],b[20],n,m,k,flag;
min(int i,int j)
{ return i<j?i:j;}
check(int i,int j)
{
    int p,count=0,max;
    max=a[i];
       for(p=i;p<=j;p++)
       {
       if(a[p]>max)
       max=a[p];
       }
       for(p=i;p<=j;p++)
       {
                        if(a[p]==max)
                        count++;
                        }
       if(count>=m)
       return max;
       else 
       return -1;
       }
l(int i,int j,int max)
{
      int p;
      for(p=i;p<=j;p++)
      {if(a[p]==max&&b[p]==0){
        a[p]++;
        b[p]=1;
        return p;
        }
        }
        if(p==j+1)
        return -1;
        }
r(int i,int j,int max)
{
      int p;
      for(p=j;p>=i;p--)
      {if(a[p]==max&&b[p]==0){
        a[p]++;
        b[p]=1;
        return p;
        }
        }
        if(p==i-1)
        return -1;
        }
solve(int i,int j)
{
     int q,p,s,ans1,ans2,ans;
     if(j<n){
     q=check(i,j);
     if(q!=-1)
     {
          p=r(i,j,q);
          ans1=solve(i+1,j+1);
          a[p]--;
          b[p]=0;
          s=l(i,j,q);
          
          ans2=solve(i+1,j+1);
          a[s]--;        
          b[s]=0;
          if(p==-1&&s==-1){
          printf("::%d %d %d\n",i,j,ans);
          flag=1;
          }
           else
              {if(ans1==-1)
                 ans=ans2;
                 else if(ans2==-1)
                 ans=ans1;
                 else
                ans=1+min(ans1,ans2);
                }  
          }
          else
          ans=solve(i+1,j+1);
        printf("%d %d %d\n",i,j,ans);
         return ans;
          }
          else
          return 0;
          }
          
main()
{
      int t,i,j,ans;
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d%d%d",&n,&k,&m);
      flag=0;
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      ans=solve(0,k-1);
      if(flag||m==1)
      printf("-1\n");
      else
      printf("%d\n",ans);
      }
      return 0;
      }
                            
                          
             
   


