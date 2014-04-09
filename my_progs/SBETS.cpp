#include<iostream>
#include<map>
#include<string>

using namespace std;

main()
{
      int w,t,a,b,i,n;
      string c1,c2,c;
        map<string,int> m;
        map<string,int> l;
      scanf("%d",&t);
      while(t--)
      {
                for(i=0;i<3;i++)
                {
                cin>>c1;
                cin>>c2;
                cin>>a;
                cin>>b;
                if(a>b)
                {
                       if(m.count(c1)>0)
                        m[c1]=m[c1]+1;
                        else
                        m[c1]=1;
                        l[c2]=1;
                        }
                        else
                        {
                            if(m.count(c2)>0)
                        m[c2]=m[c2]+1;
                        else
                        m[c2]=1;
                        l[c1]=1;
                        }
                        }
                        int max=1;
                        map<string,int> ::iterator p;
                        for(p=l.begin();p!=l.end();p++)
                        {cout<<(*p).first<<" "<<(*p).second<<"\n";}
                        
                        for(p=m.begin();p!=m.end();p++)
                        {cout<<(*p).first<<" "<<(*p).second<<"\n";}
                        
                        for(p=m.begin();p!=m.end();p++)
                        { if((*p).second>=max&&l.count((*p).first)==0){
                                c=(*p).first;                                         
                         max=(*p).second;}}
                         cout<<c<<"\n";
                         m.clear();
                         l.clear();}
                         return 0;
                         }
                        
                        
      
      
      
      
            
      
      
