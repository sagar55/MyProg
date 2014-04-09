#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
#define N 100005

#define FILEI                    freopen("input.txt","r",stdin);
#define FILEO                    freopen("out.txt","w",stdout);
/*

int read(int idx){
	int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(int idx ,int val){
	while (idx <= MaxVal){
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int readSingle(int idx)
{
int sum = tree[idx]; // sum will be decreased
if (idx > 0){ // special case
	int z = idx - (idx & -idx); // make z first
	idx--; // idx is no important any more, so instead y, you can use idx
	while (idx != z){ // at some iteration idx (y) will become z
		sum -= tree[idx]; 
// substruct tree frequency which is between y and "the same path"
		idx -= (idx & -idx);
	}
}
return sum;
}

int readSingle(int x,int y)
{
int sum = 0; // sum will be decreased
int y1;
	while (x > 0){
		y1 = y;
		while (y1 >0){
			sum+= tree[x][y1];
			y1 -= (y1 & -y1); 
		}
		x -= (x & -x); 
	}
return sum;
}
/* 2-d bit
void update(int x , int y , int val){
	int y1;
	while (x <= max_x){
		y1 = y;
		while (y1 <= max_y){
			tree[x][y1] += val;
			y1 += (y1 & -y1); 
		}
		x += (x & -x); 
	}
}

*/

int tree[305][305];
int r,c;
int read(int x,int y){
int sum = 0; // sum will be decreased
int y1;
	while (x > 0){
		y1 = y;
		while (y1 >0){
			sum+= tree[x][y1];
			y1 -= (y1 & -y1); 
		}
		x -= (x & -x); 
	}
return sum;
}

void update(int x , int y , int val)
{
	int y1;
	while (x <= r)
	{
		y1 = y;
		while (y1 <= c)
		{
				if(!hash[x][y1])
				{
					val++;
					hash[x][y1]=1;
				}
				tree[x][y1]+=val;
			y1 += (y1 & -y1); 
		}
		x += (x & -x); 
	}
}

int main()
{
   FILEI;FILEO;
   int n;
	cin>>r>>c;
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++) {cin>>n;update(i,j,n);}
	int q;
	cin>>q;
	while(q--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		ans=read(c,d);
		ans1=read(c,b-1);
		ans2=read(a-1,d);
		ans3=read(a-1,b-1);
	//	cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans<<endl;
		ans=ans-(ans2+ans1-ans3);
		cout<<ans<<endl;
	}

}
