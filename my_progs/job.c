#include<stdio.h>
int t[11];
main()
{
      int i,j,k,n,b[10][2]={0,0},swap1,swap2,max,count;
      printf("enter total no of jobs\n");
      scanf("%d",&n);
      printf("enter profit of each job and their dead-line\n");
      for(i=1;i<=n;i++)
      scanf("%d%d",&b[i][0],&b[i][1]);
         for(j=1;j<n;j++)
         {  
                   max=j;
                   for(i=j+1;i<=n;i++)
                   { if(b[max][0]<b[i][0])
                    max=i;
                    }
                    if(max!=j)
                   {
                              swap1=b[j][0];
                              swap2=b[j][1];
                                        b[j][0]=b[max][0];
                                         b[j][1]=b[max][1];
                                        b[max][0]=swap1;
                                        b[max][1]=swap2;
                   }
            } 
            
       //    for(i=1;i<=n;i++)
       //    printf("%d %d\n",b[i][0],b[i][1]);   
           for(i=1;i<=n;i++)
           {
           k=b[i][1];
                      while(k>0)    
                      {
                      if(t[k]==0)
                      {t[k]=i;
                      break;
                      }
                      else
                      k--;
                      } 
                      }
                      count=0;
                      for(i=1;i<=n;i++){
                     // printf("%d ",t[i]);
            count+=b[t[i]][0];}
            printf("\n max profit is %d\n",count);
                return 0;
                      }
                      /*
100 2
19 1
27 2
25 1
15 3
100 2
*/
            
      
