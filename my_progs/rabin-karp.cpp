#include<iostream>
#include<string>
#include<vector>
#include<cmath>
 
using namespace std;
 
int main()
{
    string T, P;
    cout<<"enter string \n"; 
    getline(cin,T);
    cout<<"enter pattern to be search in above string\n";
   getline(cin,P);
    long long int PRIME = atoll("10002949999");
    int l_T = T.length(), l_P = P.length(), t=0, h = 1, d = 26, H = 0;
    for (int i=1; i < l_P; i++)
        h = (h * d) % PRIME;
    for (int i=0;i<l_P;i++)
    {
        H = ( (d*H)  + P[i] - 'a')%PRIME ;
        t = ( (d*t)  + T[i] - 'a')%PRIME ;
    }
    for (int i = 0, j = l_T - l_P - 1 ; i < j ; i++)
    {
        if (t == H)
        {
            int state = 1;
            for (int k = 0 ;k < l_P; k++)
                if (T[i+k] != P[k])
                {
                    state = -1;
                    break;
                }
            if (state == 1 )
            {
                cout << " Match found at index : " << i << "\n";
            }
        }
        else
        {
            t =  ( (d * (t - h*(T[i]-'a')) + T[i+l_P] - 'a')%PRIME );
        }
    }
    return 0;
}
