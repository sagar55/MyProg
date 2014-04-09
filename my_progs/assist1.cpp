#include <iostream>
#include <list>
using namespace std;
int main ()
{
  list<unsigned int> l;
  unsigned int n,i,j,a[3001];
  list<unsigned int>::iterator it1,it2;
  for(i=5;i<34000;i=i+2)
  { 
          if(i%3!=0)
       l.push_back(i);
       }
          i=0;
    while(i<1)
    {   
        a[i]=l.front();
        it1=l.begin();
        advance(it2,a[i]);
        while(*it2<l.back())
        {
         l.erase(it1);
           it1=it2;
      it2=it2+a[i]);
         }             
        i++;
        
        }
        for(i=0;i<20;i++)
        cout<<a[i]<<"\n";
        scanf("%d",&n);
        return 0;
        }
   
  
  
  
