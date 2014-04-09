#include <iostream>
#include <stack>
using namespace std;

int main ()
{
     int i,j,k,n,q;
     stack<int> s;
     scanf("%d",&n);
     while(n!=0)
     {
                j=1;
        for(k=0;k<n;k++)
        {
                    scanf("%d",&i);
                    if(i==j)
                       j++;
                       else if(!s.empty()&&s.top()==j)
                       {  while(!s.empty()&&s.top()==j)
                            {s.pop();
                         j++;}
                         if(i==j)
                           j++;
                          else if(!s.empty()&&s.top()>i||(s.empty()))
                          s.push(i);
                          else if(!s.empty()&&s.top()<i)
                          break;
                         }
                    else if((!s.empty()&&s.top()>i)||(s.empty()))
                      {s.push(i);}
                      else if(!s.empty()&&s.top()<i)
                       {break;}
                      }
                      q=k;
                      while(++q<n)
                      scanf("%d",&i);
                      if(k==n)
                      printf("yes\n");
                      else
                        printf("no\n");
                        while(!s.empty())
                         s.pop();
                         scanf("%d",&n);
                         }
                         return 0;
                         }
                      
                     
                                              
                    
