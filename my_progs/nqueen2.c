#include<stdio.h>

int A[55],B[55][55],N,done;

int Solve(int G[][],int r)
{
	if(r==N)
	{
		int i,j;
		for(i=0;i<N;i++) for(j=0;j<N;j++) if(B[i][j]==1) { printf("%d ",j); break; }
		return done=1;
	}
	int i,j,k,K[][];
	for(k=0;k<N;k++)
	if(B[r][k]==0)
	{
		for(i=0;i<N;i++) for(j=0;j<N;j++) K[i][j]=G[i][j];
		// to do
		int ok=1; for(i=0;i<N;i++) B[j][A[i]-1]=B[i][j]=-1;
		int a=i,b=A[i]-1; while(a>=0 & b>=0) B[a--][b--]=-1;
		a=i,b=A[i]-1; while(a>=0 & b<N) B[a--][b++]=-1;
		a=i,b=A[i]-1; while(a<N & b>=0) B[a++][b--]=-1;
		a=i,b=A[i]-1; while(a<N & b<N) B[a++][b++]=-1;
		B[i][A[i]-1]=1;
		// till here
	}
}

int Pprocess()
{
	memset(B,0,sizeof(B)); done=0;
	int i,j;
	for(i=0;i<N;i++)
	if(A[i])
	{
		for(j=0;j<N;j++) B[j][A[i]-1]=B[i][j]=-1;
		int a=i,b=A[i]-1; while(a>=0 & b>=0) B[a--][b--]=-1;
		a=i,b=A[i]-1; while(a>=0 & b<N) B[a--][b++]=-1;
		a=i,b=A[i]-1; while(a<N & b>=0) B[a++][b--]=-1;
		a=i,b=A[i]-1; while(a<N & b<N) B[a++][b++]=-1;
		B[i][A[i]-1]=1;
	}
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int i; for(i=0;i<N;i++) scanf("%d",&A[i]);
		Pprocess();
		Solve(B,0);
	}
	return 0;
}
