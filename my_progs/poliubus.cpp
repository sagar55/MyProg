#include <iostream>
#include <string>
using namespace std;
int main()
{
      int a[91],i,j=1,k=11,t,l;
      string c;
      i=65;
while(i<=90)
    {
             if(i==74)
           {
                    a[i]=24;
                    i++;}
          else if(j<=5){
                 a[i]=k;
                 k++;
                 j++;
                 i++;}
                 else
                 {j=1;
                  k=k+5;}
                  }
                scanf("%d\n",&t);
                while(t){
                        getline(cin, c);
                         while(*c!='\0')
                         {
                                         if(*c!=32)
                           printf("%d%c",a[*c],32);
                           c++;
                         }
                      printf("\n");
                      t--;
                 }
                 return 0;
                 }

