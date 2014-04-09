#include<stdio.h>
char c,d;
int a[1000001],b[1000001];
min(int i,int j)
{ return i<j?i:j;}
min1(int i,int j,int k)
{ if(i<j)
  return i<k?i:k;
  else
  return j<k?j:k;  
}
main()
{
      int cnt,n,t,i,cnt2;
   scanf("%d\n",&n);
      
      cnt=0;cnt2=0;
      for(i=0;i<n;i++)
      {
                      c=getchar();
                      if(c=='B')
                      {
                      d='A';
                      if(i==0)
                      a[i]=1;
                       else if(cnt)
                      { 
                              if((i-cnt-1)>=0){    
                      a[i]=min1(a[i-1]+1,1+b[i-cnt-1],2+a[i-cnt-1]);
                      }
                      else
                      a[i]=a[i-1];
                      }
                      else
                          a[i]=min(1+b[i-1],a[i-1]+1);
                       cnt++;
                          }
                          else
                          {
                              d='B';
                              if(i==0)
                              a[i]=0;
                              else
                              a[i]=a[i-1];
                              cnt=0;
                              }
                              
                       if(d=='B')
                      {
                      if(i==0)
                      b[i]=1;
                       else if(cnt2)
                      { 
                              if((i-cnt2-1)>=0){    
                      b[i]=min1(b[i-1]+1,1+a[i-cnt2-1],2+b[i-cnt-1]);
                      }
                      else
                      b[i]=b[i-1];
                      }
                      else
                          b[i]=min(1+a[i-1],b[i-1]+1);
                       cnt2++;
                          }
                          else
                          {
                              if(i==0)
                              b[i]=0;
                              else
                              b[i]=b[i-1];
                              cnt2=0;
                              }
                              
                              //printf("%d :%d\n",a[i],b[i]);
                              }
                              printf("%d\n",a[n-1]);
                              return 0;
                              }
      
