#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<unsigned int> v;
  unsigned int n,i,j,a[3001];
  vector<unsigned int>::iterator it1,it2;
  for(i=5;i<34000;i=i+2)
  { 
          if(i%3!=0)
       v.push_back(i);
       }
          i=0;
    while(i<=3000)
    {   
        a[i]=v[0];
        if(i==0)
        cout<<v[10]<<"\n";
        it1=v.begin();
        advance(it2,a[i]);
        while(it2<v.end())
        {
         v.erase(it1);
           it1=it2;
          advance(it2,a[i]);
        }          
          if(i==0){
          cout<<v[10]<<"\n";}
        i++;
        }
        for(i=0;i<20;i++)
        cout<<a[i]<<"\n";
        scanf("%d",&n);
        return 0;
        }
   
  
  
  
