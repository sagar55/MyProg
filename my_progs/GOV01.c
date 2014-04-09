#include<stdio.h>
main()
{
      int a[101],f[10001],t,n,i,j,flag;
      scanf("%d",&t);
      while(t--)
      {
                for(i=0;i<101;i++)
               a[i]=0;
               for(i=0;i<10001;i++)
              f[i]=0;
              flag=0;
                scanf("%d",&n);
                for(j=0;j<n;j++)
                {
                          scanf("%d",&i);
                          a[i]++;
                          }
                          for(i=100;i>0;i--)
                          if(a[i]%i==0)
                          f[a[i]]=i;
                          for(i=10000;i>0;i--)
                          if(f[i]!=0&&i%f[i]==0){
                            flag=1;
                            break;}
                            if(flag==0)
                            printf("-1\n");
                            else
                            printf("%d\n",f[i]);
                            }
                            return 0;
                            }
                            
                          
             
   


