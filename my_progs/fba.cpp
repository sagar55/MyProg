#include<stdio.h>
#include<algorithm>
using namespace std;
bool soll (int i,int j) { return (i>j); }
main()
{
char a[2050],c;
int i,m,j,calculate,b[30],k,p=1;    
scanf("%d\n",&m);
while(m--)
{
          gets(a);
          for(i=1;i<28;i++)
          b[i]=0;
          for(i=0;i<strlen(a);i++)
          {
          if(a[i]=='a'||a[i]=='A')
          b[1]++;
          else if(a[i]=='n'||a[i]=='N')
          b[14]++;
          else if(a[i]=='o'||a[i]=='O')
          b[15]++;
          else if(a[i]=='p'||a[i]=='P')
          b[16]++;
          else if(a[i]=='q'||a[i]=='Q')
          b[17]++;
          else if(a[i]=='r'||a[i]=='R')
          b[18]++;
          else if(a[i]=='s'||a[i]=='S')
          b[19]++;
          else if(a[i]=='t'||a[i]=='T')
          b[20]++;
          else if(a[i]=='u'||a[i]=='U')
          b[21]++;
          else if(a[i]=='v'||a[i]=='V')
          b[22]++;
          else if(a[i]=='w'||a[i]=='W')
          b[23]++;
          else if(a[i]=='x'||a[i]=='X')
          b[24]++;
          else if(a[i]=='y'||a[i]=='Y')
          b[25]++;
          else if(a[i]=='z'||a[i]=='Z')
          b[26]++;
          else if(a[i]=='b'||a[i]=='B')
          b[2]++;
          else if(a[i]=='c'||a[i]=='C')
          b[3]++;
           else if(a[i]=='g'||a[i]=='G')
          b[7]++;
          else if(a[i]=='h'||a[i]=='H')
          b[8]++;
          else if(a[i]=='i'||a[i]=='I')
          b[9]++;
          else if(a[i]=='j'||a[i]=='J')
          b[10]++;
          else if(a[i]=='k'||a[i]=='K')
          b[11]++;
          else if(a[i]=='l'||a[i]=='L')
          b[12]++;
          else if(a[i]=='d'||a[i]=='D')
          b[4]++;
          else if(a[i]=='e'||a[i]=='E')
          b[5]++;
          else if(a[i]=='f'||a[i]=='F')
          b[6]++;
         
          else if(a[i]=='m'||a[i]=='M')
          b[13]++;
          
          }
          
          sort(b+1,b+27,soll);
         
          i=1;
          calculate=0;
          k=26;
          while(b[i]!=0)
          {
           calculate+=k*b[i];
           i++;
                        k--;}
                        printf("Case #%d: %d\n",p++,calculate);
                        }
                        
                        return 0;
                        }
          
          
