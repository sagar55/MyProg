#include<stdio.h>
int reverse(int i)
{
            int j=i,n=0;
            while(j>0)
            {
            n=j%10+n*10;
            j=j/10;  
            }
            i=n;
}
main()
{
      int t,i,j,k,l,n,a[10000],p,q,r,d=0;
      scanf("%d",&n);
      p=reverse(n);
      printf("%d\n",p);
      for(j=0;p>0;j++)
      {
                      a[j]=p%10;
                      p=p/10;
                      }
      k=1;
      q=j-1;
      t=q;
      n=0;
      while(k<=t)
      {    
           p=j;
           for(i=n,l=k;i<n+q;j++,l++,i++)
            { 
               if(a[i]!=0)
                a[j]=a[i]*10+a[l];
                 else
               {  
               
                     j--;
                     }
                     }
            k=k+1;       
            n=p; 
            q=q-1;
            }
                        for(r=0;r<j;r++)
           {
                       
                                        if(a[r]%8==0)
                                        d++;
                                        }   
                                        printf("%d",d);
                                        getch();
                                        }               
                      
                                               
                         
      
