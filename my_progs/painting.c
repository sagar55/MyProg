#include<stdio.h>
int n,mi,mj;
check(char a[][51],char b[][51])
{
  int i,j;
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   if(a[i][j]!=b[i][j])
    { mi=i;
    mj=j;
    break;
   }
   if(i==n&&j==n)
   return 1;
}
change(char a[][51],char b[][51],int p,int q)
{
            int i,j;
            char c=a[mi][mj];
            for(i=mi;i<p;i++)
            for(j=mj;j<q;j++)
              b[i][j]=c;    
            }
main()
{
      int i,j,p,q,c[2501][5],d[2501][5],l,min,k,temp[51];
      char a[51][51],b[51][51];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%s",a[i]);
      for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       b[i][j]='W';
       l=0;
      while(!check(a,b))
      {
      k=0;
      p=mj;q=mi;
      for(i=mi;i<n;i++){
       for(j=mj;j<n;j++)
       if(a[i][j]!=b[i][j])
       continue;
       else{
       temp[k++]=j;
       break;}
       }
       sort(temp,temp+k);
       p=temp[k-1];
        for(i=mi;i<n;i++){
                          count=0;
       for(j=mj;j<n;j++)
         if(a[i][j]!=b[i][j])
          count++;
         else
         { if(count==p)
             q=i;
             break;
             }
             }
       change(a,b,q,p);
       c[l][0]=mi;
       c[l][1]=mj;
       c[l][2]=q;
       c[l][3]=p;
       if(a[mi][mj]=='B')
       c[l++][4]=119;
       else
       c[l++][4]=98;
       }
       min=l;
       for(i=0;i<min;i++)
       printf("%d %d %d %d %c\n",c[i][0],c[i][1],c[i][2],c[i][3],c[i][4]);
       for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       b[i][j]='B';
       l=0;
      while(!check(a,b))
      {
      k=0;
      p=mj;q=mi;
      for(i=mi;i<n;i++){
       for(j=mj;j<n;j++)
       if(a[i][j]!=b[i][j])
       continue;
       else{
       temp[k++]=j;
       break;}
       }
       sort(temp,temp+k);
       p=temp[k-1];
        for(i=mi;i<n;i++){
                          count=0;
       for(j=mj;j<n;j++)
         if(a[i][j]!=b[i][j])
          count++;
         else
         { if(count==p)
             q=i;
             break;
             }
             }
       change(a,b,q,p);
       d[l][0]=mi;
       d[l][1]=mj;
       d[l][2]=q;
       d[l][3]=p;
       if(a[mi][mj]=='B')
       d[l++][4]=119;
       else
       d[l++][4]=98;
       }
       if(l<min)
       min=l;
       for(i=0;i<l;i++)
       printf("%d %d %d %d %c\n",d[i][0],d[i][1],d[i][2],d[i][3],d[i][4]);
       getch();
       }
      
         
       
       
       
       
       
       
       
       
       
      
