#include<stdio.h>
main()
{
      int r,c,n,i,j,q=0,min,a[100][100],b[100],d[100],k,p,s;
      scanf("%d%d",&r,&c);
      for(i=0;i<r;i++)
      {for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
        }
        for(i=0;i<r;i++)
        { min=a[i][0];
               for(j=1;j<c;j++)
               {if(a[i][j]<min)
                      min=a[i][j]; }
                      k=0;j=0;
               while(k<c)
               {   
                         if(a[i][k]==min)
                 {b[j]=k;j++;}
                 k++;}
             for(k=0;k<j;k++)
             {   p=0;
              while(min>=a[p][b[k]]&&p<r)
              p++;
             if(p==r)
               { d[q]=min;
               q++;
                break;}
                }
                }
                s=q;
                if(s>0)
                {   q=1;
                        while(d[q]==d[q-1]&&q<s)
                        q++;
                }
               if(q!=s||i==r&&q==0)
               printf("GUESS");
               else
               printf("%d",d[0]);
               getch();
               }
             
                           
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
