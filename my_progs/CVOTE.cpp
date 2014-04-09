#include<map>
#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
      map<string,int> m1,m3;
      map<string,string> m2;
      map<string,int>::iterator it;
      string p,q,r,temp;
      int m,n,max1=0,max2=0;
      scanf("%d%d",&n,&m);
      while(n--)
      {
     cin>>p>>q;
     m1[p]=0;
     m2[p]=q;
     m3[q]=0;
     }
      while(m--)
      {
                cin>>r;
                m1[r]++;
                temp=m2[r];
                m3[temp]++;
                if(m1[r]>max1)
                max1=m1[r];
                if(m3[temp]>max2)
                max2=m3[temp];
                }
      for ( it=m3.begin() ; it != m3.end(); it++ )
    if((*it).second==max2)
    {cout<<(*it).first<<"\n";
    break;
    }
    for ( it=m1.begin() ; it != m1.end(); it++ )
    if((*it).second==max1)
    {cout<<(*it).first<<"\n";
    break;
    }
                return 0;
                }
                
                
                
      
