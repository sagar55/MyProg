#include<stdio.h>
#include<stdlib.h>
int min (int a, int b)
{
        return a<b?a:b;
}
 
int main()
{
        int T, R, C, I, J, tmp;
        scanf("%d",&T);
        while (T--){
                int arr[502][502];
                scanf("%d %d",&R, &C);
                int i, j;
                for(i=1;i<=R;i++)
                        for (j=1;j<=C;j++)
                                scanf("%d",&arr[i][j]);
 
                
                int temp[R+1][C+1];
                temp[R][C]=0;
                for(j=C-1;j>=1;j--)
                {
                if(temp[R][j+1]>arr[R][j])
                {
                if(temp[R][j+1]==0)
                temp[R][j]=abs(arr[R][j])+1;
                else
                temp[R][j]=temp[R][j+1]-arr[R][j];
                }
                else
                temp[R][j]=0;
                }
                for(i=R-1;i>=1;i--)
                {
                if(temp[i+1][C]>arr[i][C])
                {
                if(temp[i+1][C]==0)
                temp[i][C]=abs(arr[i][C])+1;
                else
                temp[i][C]=temp[i+1][C]-arr[i][C];
                }
                else
                temp[i][C]=0;
                }
                
                for (i=R-1;i>=1;i--)
                        for (j=C-1;j>=1;j--)
                    {
                        int p=min(temp[i+1][j],temp[i][j+1]);
                         if(arr[i][j]<p)
                        {
                        if(p==0)
                        temp[i][j]=abs(arr[i][j])+1;
                        else
                        temp[i][j]=p-arr[i][j];    
                        }
                        else
                        temp[i][j]=0;   
                }            
                            
           /*   for(i=1;i<=R;i++){
                        for (j=1;j<=C;j++)
              printf("%d ",temp[i][j]);
               printf("\n");
        }*/
                        if(temp[1][1]==0)
                        printf("1\n");
                        else
                printf("%d\n",temp[1][1]);
            }
        return 0;
}
