#include<stdio.h>
#include<string.h>
int visit[100];
int ans[100],no;
int print(char a[],int m)
{
      int i;
 for(i=1;i<=m;i++)
 printf("%c",a[i]);
 printf("\n");   
}
swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
    
perm(int k,int n,char a[])
{
    int i;
    if(k==n)
    print(a,n);
    else
    {
        for(i=k;i<=n;i++)
        {
            swap(&a[i],&a[k]);
            perm(k+1,n,a);
            swap(&a[i],&a[k]);
        }
    }
}
nCm(char *arr,int m,int k,int j)
{
	int i;
	if(j==m)
	{
	    int p=1;
		char a[m+2];
		for(i=0;i<no;i++)
		if(visit[i])
		a[p++]=arr[i];
		perm(1,m,a);
		//printf("%d ",arr[i]);
		printf("\n");
		return ;
	}
	if(k==no)
	return ;
		visit[k]=1;
		nCm(arr,m,k+1,j+1);
		visit[k]=0;
		nCm(arr,m,k+1,j);
	return ;	
}

int main()
{
	char arr[100];
	int m;
	scanf("%s",arr);
	no=strlen(arr);
	scanf("%d",&m);
	nCm(arr,m,0,0);
	return 0;
}
