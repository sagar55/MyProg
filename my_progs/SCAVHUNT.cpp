#include<stdio.h>
#include <map>
#include<iostream>
using namespace std;
main()
{
      map<string,string> a,b;
      map<string,int>c;
      string p,q;
      int n,i,j,r=1,t,sum,t2;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                t2=n-1;
                sum=0;
                while(t2--)
                {
                          cin>>p;
                          cin>>q;
                          a[p]=q;
                          b[q]=p;
                          }
                    map<string,string>::iterator it1,it2;
                    it1=a.begin();
                    it2=b.find((*it1).first);
                    while(it2!=b.end())
                    { //cout<<"hi\n";
                                       it1++;
                         it2=b.find((*it1).first);
                         }
                        n--;
                         string temp=(*it1).first;
                         printf("Scenario #%d:\n",r++);
                  while(n--)
                  {
                      cout<<temp<<"\n";
                      temp=a[temp];
                      }
                      cout<<temp<<"\n";
                      a.clear();b.clear();c.clear();
                      }
                      return 0;        
                      }
