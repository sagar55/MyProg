#include<iostream>
#include<vector>

using namespace std;

int insertion_sort(vector<int> &v,int n)
{
int i,j,key,count=0;
            for(j=1;j<n;j++)                         
            {
                   key=v[j];
                   i=j-1;
                   while(i>=0&&v[i]>key)
                   {
                                        v[i+1]=v[i];
                                        i=i-1;
                                        count++;
                   }
                   v[i+1]=key;
            }
return count;                    
}    
int main()
{
    
    vector<int> v;
    int t,n,j,x,count;
     scanf("%d",&t);
      while(t){
               
    scanf("%d",&n);
    for(j=0;j<n;j++)
        { scanf("%d",&x);
        v.push_back(x);
        }
              count=insertion_sort(v,n);
         printf("%d\n",count);
         v.clear();
               t--;}
               return 0;
               }                               
               
         
