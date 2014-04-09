#include<stdio.h>
int c=1,count[11],nb[11][11];
void fun(int a)
{
 	 int i;
 	 if(a==1)
 	 		 return;
 	 c = c+count[a]-1;
 	 for(i=1;i<=count[a];i++)
 	 		fun(nb[a][i]);
}				 
 	 
int main()
{
 	int t,x,y,z,i,j,k,w[11][11],cost[11],n,m;
 	scanf("%d",&t);
 	while(t--)
 	{
	 		  scanf("%d%d",&n,&m);
	 		  for(i=1;i<=n;i++)
	 		     for(j=1;j<=n;j++)
	  				  w[i][j]=0;
	  		  for(i=1;i<=n;i++)
				cost[i] = 999999999;	
		      cost[1] = 0;	  
	 		  for(i=0;i<m;i++)
  			  {
 				  scanf("%d%d%d",&x,&y,&z);
 				  w[x][y] = z;
 				  w[y][x] = z;
  			  }
  			  c=0;
  			  for(i=0;i<n-1;i++)
  					for(j=1;j<=n;j++)
						 for(k=1;k<=n;k++)
						 {
						  		if(w[j][k]==0)
								         continue;		  
 				  		  		if(cost[j]+w[j][k]<cost[k])
  		  					  	{
							 			  cost[k] = cost[j] + w[j][k];
							 			  nb[k][1]=j;
							 			  count[k]=1;
 		  		  		  				  continue;		  
		  						}
								if(cost[k] == cost[j]+w[j][k])
							    {
								 		  
								 		   for(x=1;x<=count[k];x++)
  						   				         if(nb[k][x]==j)
													    break;
											if(x==count[k]+1)
											{		    
											      count[k]++;
										          nb[k][count[k]] = j;    
									        }
		   					    }		   							    
						}
					
		      c=1;		
			  fun(n);						 		  
	          printf("%d\n",c);
  }
  return 0;
}
			   			 
			   			 
