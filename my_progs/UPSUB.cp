void backtrack(string AB,int i,int val){
int j;
if(val==1) {
v.push_back(AB);
return ;
}
for(j=i;j>=0;j-)
if(M[j]==val && ( AB.empty() || A[j]<=AB[0]))
backtrack(A[j]+AB,j,val-1);
return ;
}
int main(){
int t=SS,maxi,index,i,j,len;
while(t--)
{
cin>>A;
len=A.size();
memset(M,0,sizeof(M));
for(i=1;i<len;i++)
for(j=0;j<i;j++)
if(A[i]>=A[j] && M[i]<=M[j]+1)
M[i]=M[j]+1;
index=0;
maxi=0;
for(i=0;i<len;i++)
if(M[i]>=maxi)
maxi=M[i];
string P;
int n;
backtrack(P,len-1,maxi);
n=v.size();
sort(v.begin(),v.end());
cout<<v[0]<<endl;
for(i=1;i<n;i++)
if(v[i]!=v[i-1] )
cout<<v[i]<<endl;
v.clear();
}
return 0;
}
