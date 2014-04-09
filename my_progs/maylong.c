#include<stdio.h>
main()
{
      char a[5][20];
      int t=1,flag=0,b[6]={0,0,0,0,0,0};
      while(t<6)
      {
            scanf("%s",a[t]);
            if(strstr(a[t],"FBI")!='\0'){
            flag=1;
            b[t]=t;}
            t++;
            }
            if(flag==0)
            printf("HE GOT AWAY!");
            else{
            for(t=1;t<=5;t++)
            { if(b[t]!=0)
            printf("%-2d",b[t]);}
            }
            getch();
}
