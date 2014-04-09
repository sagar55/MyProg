#include<stdio.h>
#include<math.h>
#include<string.h>
bool a[10001];
void f(int n)
{
      
      int m,i,j,t,k=2,l;
       for(l=0;l<=n;l++)
          a[l]=0;
          a[1]=1;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
                                 }
main()
{
      int t,i,j,max,k,n;
      char s[1001];
      f(1005);
scanf("%d",&t);
while(t--)
{
          max=1;
          scanf("%s",s);
          n=strlen(s); 
          bool table[n][n];
    memset( table, 0, sizeof( table ) );
          for(i=0;i<n;++i )
        table[i][i] = true;
 
    int start = 0;
    for(i=0;i<n-1;++i )
        if( s[i] == s[i+1] )
            table[i][i+1] = true;
 
    for(k=3;k<= n;++k )
    {
        for(i=0;i<n-k+1;++i )
        {
            j = i + k - 1;
            if( table[i+1][j-1] && s[i] == s[j] )
                table[i][j] = true;
        }
    }
 
          for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            if(table[i][j])
            {  if((j-i+1)>max)
            max=j-i+1;
            }
           // printf("%d\n",max);
            if(a[max]==0)
            printf("YES\n");
            else
            printf("NO\n");
            }
            return 0;
            }
            
            

