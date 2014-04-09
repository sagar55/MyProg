#include<stdio.h>
int a[2002][3],b[50],m[2002],p[2002];
max(int m,int n)
{return m>n?m:n;}
int f(int j)
{
    if(j>0){
    if(!m[j])
    m[j]=max(a[j-1][2]+f(p[j]),f(j-1));
    return m[j];
}
return 0;
}
sort(int n)
{
         int key,key2,key3,i,j;
         for(j=1;j<n;j++)
         { key=a[j][1];
         key2=a[j][0];
         key3=a[j][2];
         i=j-1;
         while(i>=0&&key<a[i][1])
         {
                    a[i+1][1]=a[i][1];
                    a[i+1][0]=a[i][0];
                    a[i+1][2]=a[i][2];
                    i--;
                    }
                    a[i+1][1]=key;
                    a[i+1][0]=key2;
                    a[i+1][2]=key3;
                    }
                    }
main()
{
        int i=0,j,t,n;
        scanf("%d",&t);
        while(t--){
                   scanf("%d",&n);
                   i=0;
      while(i<n){
      scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
      i++;}i=0;
      sort(n);
       for(i=0;i<49;i++)
           b[i]=0;
     for(i=0;i<n;i++)
        b[a[i][1]]=i+1;
        //for(i=0;i<10;i++)
        //printf("%d  ",b[i]); 
        //printf("\n");
          p[1]=0;
        for(i=1;i<n;i++)
        {  j=a[i][0];
        while(j>=1&&b[j]==0)
        j--;
        p[i+1]=b[j];
        }
        for(j=1;j<=n;j++)
        m[j]=0;
        f(n);
      //  for(i=1;i<12;i++)
      //  printf("%d\t",p[i]);
      printf("%d\n",m[n]);
      
      }getch();}
