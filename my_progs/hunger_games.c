#include<stdio.h>
main()
{
      long long int p[105],b[105][2],t,f,i,j,count,ans,swap1,swap2,n,dead,min,flag=0;
      scanf("%lld",&n);
       i=1;count=0;
      while(i<=n)
      { scanf("%lld%lld",&b[i][0],&b[i][1]);
        count+=b[i][0];
         i++;}
         for(j=1;j<n;j++)
         {  
                   min=j;
                   for(i=j+1;i<=n;i++)
                   { if(b[min][1]>b[i][1])
                    min=i;
                    }
                    if(min!=j)
                   {
                              swap1=b[j][0];
                              swap2=b[j][1];
                                        b[j][0]=b[min][0];
                                         b[j][1]=b[min][1];
                                        b[min][0]=swap1;
                                        b[min][1]=swap2;
                   }
            }
            scanf("%lld",&t);
            for(i=1;i<=t;i++)
            scanf("%lld",&p[i]);
            f=1;
            dead=0;i=1;ans=0;
            while(dead!=count)
            {
           // printf("%lld %lld %lld\n",dead,count,f);
            if(f==t+1)
            {
                      flag=1;
            break;
            }
            if(dead+b[i][0]<p[f])
            {
              dead+=b[i][0];
              ans=ans+b[i][1]*f*b[i][0];
              i++;
              }
              else if(dead+b[i][0]==p[f])
              {
                   dead+=b[i][0];
                   ans=ans+b[i][1]*f*b[i][0];
                   i++;
                   f++;
               }
               
              else
              {
                  dead=p[f];
                  b[i][0]-=(p[f]-dead);
                  ans=ans+(p[f]-dead)*f*b[i][1];
                  f++;
                  }
                  }
                  if(flag)
                  while(i<=n)
                  {
                   ans=ans+b[i][0]*b[i][1]*f;
                             i++;
                             }
                             
              printf("%lld\n",ans);
              getch();
              }
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                               
