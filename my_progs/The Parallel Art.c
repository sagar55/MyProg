#include <stdio.h>
#include <string.h>

int main ()
{
    int t,i,j,n,m;
  char a[20],b[20];
  scanf("%d",&t);
  while(t--)
  {
            scanf("%s",a);
            n=strlen(a);
            for(i=1;i<n;i++)
            {
                             strncpy(b,a,i);
                             b[i]='\0';
                             printf("%s\n",b);
                             }
                     printf("%s\n",a);
                     m=n;
                for(i=1;i<n;i++)
                {
                                for(j=0;j<m;j++)
                                a[j]=a[j+1];
                                m--;
                                printf("%s\n",a);
                                }
                                }
                                return 0;
}                                             
