#include<iostream>
#include<stdio.h>
using namespace std;
long long int weight[5][5],visited[5],m[5][5];
long long int v,e;
int cofactor(int data[][3],int x,int y)
{
    int cofactor_v;

    cofactor_v = data[(x + 1) % 3][(y + 1) % 3]*data[(x + 2) % 3][(y + 2) % 3]- data[(x + 1) % 3][(y + 2) % 3]* data[(x + 2) % 3][(y + 1) % 3];
    return cofactor_v;
}

void creategraph()
{
long long int i,j,a,b,w,count,d[10];
cout<<"\nEnter number of vertices";
cin>>v;
cout<<"\nEnter number of edges";
cin>>e;
for(i=1;i<=v;i++)
  for(j=1;j<=v;j++)
    weight[i][j]=0;
for(i=1;i<=v;i++)
{
  visited[i]=0;
  d[i]=32767;
}
for(i=1;i<=e;i++)
{
  cout<<"\nEnter edge a,b and weight w:";
  cin>>a>>b>>w;
  weight[a][b]=weight[b][a]=w;
}
for(i=1;i<=v;i++)
{
                 count=0;
  for(j=1;j<=v;j++)
  if(weight[i][j]==1)
  count++;
  m[i][i]=count;
  for(j=1;j<=v;j++)
  if(j!=i)
  m[i][j]=-1;
}
}

main()
{
      int ans,i,j,k,l,data[3][3];
creategraph();
for(i=0;i<3;i++)
for(j=0;j<3;j++)
data[i][j]=m[i+2][j+2];
j=cofactor(data,0,0);
k=cofactor(data,1,1);
l=cofactor(data,2,2);
ans=j*m[2][2]+k*m[2][3]+l*m[2][4];
printf("%d\n",ans);
scanf("%d",&i);
}

   



