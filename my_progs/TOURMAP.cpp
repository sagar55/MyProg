#include<stdio.h>
#include <map>
#include<iostream>
using namespace std;
main()
{
      map<string,string> a,b;
      map<string,int>c;
      string p,q;
      int n,i,j,r,t,sum,t2;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                if(n==1)
                printf("0$\n");
                else{
                t2=n-1;
                sum=0;
                while(t2--)
                {
                          cin>>p;
                          cin>>q;
                          scanf("%d$",&r);
                          a[p]=q;
                          b[q]=p;
                          c[p]=r;
                          sum+=r;
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
                  while(n--)
                  {
                      cout<<temp<<" "<<a[temp]<<" "<<c[temp]<<"$"<<"\n";
                      temp=a[temp];
                      }
                      a.clear();b.clear();c.clear();
                      cout<<sum<<"$"<<"\n";
                      }}
                      return 0;        
                      }
