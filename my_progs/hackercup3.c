#include<stdio.h>
int min(int a[])
{
        int min,i;
      min=a[0];
      for(i=1;i<9;i++){
      if(a[i]<min)
      min=a[i];  }
      return min;      }
main()
{
      int n,t,i,j,s[9],x[20],l,h,a,c,k,e,r,u,p;
      char b[1000],q;
      scanf("%d",&t);
      scanf("%c",&q);
      for(i=0;i<t;i++)
      {
             gets(b);
             n=strlen(b);
             h=0;a=0;c=0;k=0;e=0;r=0;u=0;p=0;
             for(l=0;l<9;l++);
                s[l]=0;  
             for(j=0;j<n;j++)
             {         
                 if(b[j]=='H'){
                    h++;
                    s[0]=h;}
                  else if(b[j]=='A'){
                    a++;
                    s[1]=a;}
                    else if(b[j]=='C'){
                         c++;
                    if(c%2==0)
                    s[6]=c/2;
                    else
                    s[2]=c/2+1;}
                    else if(b[j]=='K'){
                    k++;
                    s[3]=k;}
                    else if(b[j]=='E'){
                    e++;
                    s[4]=e;}
                    else if(b[j]=='R'){
                    r++;
                    s[5]=r;}
                    else if(b[j]=='U'){
                    u++;
                    s[7]=u;}
                    else if(b[j]=='P'){
                    p++;
                    s[8]=p;}
                    }
                    x[i]=min(s);
                    }
               for(i=0;i<t;i++)
      printf("%d\n",x[i]);
      getch();
      }
      
              
                      
      
