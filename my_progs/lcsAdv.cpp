#include<map>
#include<cstdio>
#include<set>
#include<cassert>
#include<cstring>
#include<iostream>
#include<algorithm>
//#define Get getchar_unlocked()
#define N 1000005
using namespace std;
 
//inline int getInt() { int a=0,sign=1; register char ch=0; while(ch<33) ch=Get; if(ch=='-') { sign=-1; ch=Get; } while(ch>33) { a=a*10+ch-'0'; ch=Get; } return a*sign; }
 
int str[N],rank[N], pos[N],cnt[N], next[N],lcp[N],l1; 

string st,st2;
bool bh[N], b2h[N]; 
 int nn,mm;
bool smaller_first_char(int a, int b){
    return str[a] < str[b];
}
void suffixSort(int n){
    for (int i=0; i<n; ++i)
        pos[i] = i;
    sort(pos, pos + n, smaller_first_char);
    for (int i=0; i<n; ++i){
    bh[i] = i == 0 || str[pos[i]] != str[pos[i-1]];
    b2h[i] = false;
    }
    for (int h = 1; h < n; h <<= 1){
    int buckets = 0;
    for (int i=0, j; i < n; i = j){
    j = i + 1;
    while (j < n && !bh[j]) j++;
    next[i] = j;
    buckets++;
    }
    if (buckets == n) break;
    for (int i = 0; i < n; i = next[i]){
    cnt[i] = 0;
    for (int j = i; j < next[i]; ++j){
    rank[pos[j]] = i;
    }
    }
    cnt[rank[n - h]]++;
    b2h[rank[n - h]] = true;
    for (int i = 0; i < n; i = next[i]){
    for (int j = i; j < next[i]; ++j){
    int s = pos[j] - h;
    if (s >= 0){
    int head = rank[s];
    rank[s] = head + cnt[head]++;
    b2h[rank[s]] = true;
    }
    }
    for (int j = i; j < next[i]; ++j){
    int s = pos[j] - h;
    if (s >= 0 && b2h[rank[s]]){
    for (int k = rank[s]+1; !bh[k] && b2h[k]; k++) b2h[k] = false;
    }
    }
    }
    for (int i=0; i<n; ++i){
    pos[rank[i]] = i;
    bh[i] |= b2h[i];
    }
    }
    for (int i=0; i<n; ++i){
    rank[pos[i]] = i;
    }
}
 
int f(int idx)
{
    return (idx < nn-mm-1) ? 1 : 2;
}
 
void solve(int n){
    for (int i=0; i<n; ++i) rank[pos[i]] = i;
    lcp[0] = 0;
    for (int i=0, h=0; i<n; ++i){
    if (rank[i] > 0){
    int j = pos[rank[i]-1];
    while (i + h < n && j + h < n && str[i+h] == str[j+h]) h++;
    lcp[rank[i]] = h;
    if (h > 0) h--;
    }
    }
   // for(int i=2; i<n; ++i)
    //  cout<<pos[i]<<":";
    //  cout<<endl;
/*
 for (int i = 0;i < n; i++) 
cout<<pos[i]<<":";
cout<<endl;
  for (int i = 0;i < n; i++) 
cout<<lcp[i]<<"::";
cout<<endl;
*/
  int idx=0;
int maxLCP = 0;
    string ans;
set<string> s;
 for (int i = 1; i < n; i++)
    {
//cout<<pos[i]<<"<>"<<lcp[i]<<"<>"<<f(pos[i])<<endl;
        if (lcp[i] > maxLCP && f(pos[i]) != f(pos[i-1]))
        {
            maxLCP =lcp[i];
            idx = pos[i];
//cout<<maxLCP<<":"<<idx<<endl;
            ans = st.substr(pos[i], maxLCP);
s.clear();
            s.insert(ans);
//cout<<ans<<endl;
        }
        else if(lcp[i] == maxLCP &&f(pos[i]) !=f(pos[i-1]))
        {
            ans = st.substr(pos[i], maxLCP);
s.insert(ans);
//cout<<ans<<"?"<<endl;
        }
    }
int min=1e9;
    if(maxLCP==0) cout<<maxLCP<<endl;
    else {
 for (set<string>::iterator it=s.begin(); it!=s.end(); ++it)
            {
            	int v=st2.find(string(*it));
          //  	cout<<initial<<" "<<*it<<" "<<v<<endl;
            	if(v<min)
            	{
            		ans=*it;
            		min=v;
            	}
            }
cout<<ans<<endl<<ans.size()<<endl;
}

}
int main()
{
    int t;    
  //  freopen("input.txt","r",stdin);
  //  freopen("output1.txt","w",stdout);
    //memset(str,0,sizeof str);
    int n,idx,p,q;
while(cin>>st)
    {
        cin>>st2;

    l1=st.size();
st=st+'.'+st2+'}';
   int  len=st.size();
for(int i=0;i<len;i++) str[i]=st[i];
 nn=len;
 mm=st2.size();
    suffixSort(len);
    solve(len);
 }
    return 0;
    }  