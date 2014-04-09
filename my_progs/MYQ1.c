#include<stdio.h>
main()
{
      int t,k,n,p,mod,row;
      char i,j;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                if(n==1)
                printf("poor conductor\n");
                else{
                mod=n%5;
                row=n/5;
                if(mod!=0&&mod!=1)
                row++;
                if(row%2==0){
                switch(mod)
                {
                 case 1:
                i='W';j='L';break;
                case 2:
                i='W';j='R';break;
                case 3:
                i='M';j='R';break;
                case 4:
                i='A';j='R';break;
                default:
                i='A';j='L';break;
                }}
                else
                { switch(mod){
                    case 1:
                i='W';j='R';break;
                case 2:
                i='W';j='L';break;
                case 3:
                i='A';j='L';break;
                case 4:
                i='A';j='R';break;
                default:
                i='M';j='R';break;
                }}
                printf("%d %c %c\n",row,i,j);
                }}
                return 0;}
                    
