#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

  fstream file1("out.txt"), file2("output.txt");
  freopen("result.txt","w",stdout);
  char string1[20005], string2[20005];
  int flag=0,j=0,cnt=50;

  while(!file1.eof()&&cnt--)
  {
    file1.getline(string1,2566);
    file2.getline(string2,2566);
    j++;
    if(strcmp(string1,string2) != 0)
    {
      cout << j << "-th strings are not equal" << "\n";
      flag=1;
    //  cout << "   " << string1 << "\n";
    //  cout << "   " << string2 << "\n";
    }
  }
  if(!flag) cout<<"Both file are identical"<<endl;
  
  //system("pause");
        return 0;
}
