#include <stdio.h>
int n;
int dist[16][16]; 
void floyd_warshall() {
	int i, j, k;
	for (k=0;k<n;k++) {
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
		 if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
            printf("final matrix is\n");
            	for (i=0;i<n;i++){
			for (j=0;j<n;j++)
			   printf("%d  ",dist[i][j]);
			   printf("\n");
            }
        }
main() {
    memset(dist,1000,sizeof dist);
    printf("enter no of vertexes\n");
	scanf("%d", &n);
	int i, j;
	printf("enter vertex no to and from and weight of edges\n");
	scanf("%d%d",&i,&j);
while(i!=-1){
    scanf("%d",&dist[i][j]);
    scanf("%d%d",&i,&j);
}
floud_warshall();
	return 0;
}
