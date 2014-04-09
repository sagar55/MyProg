#include<stdio.h>
#include<string.h>
main()
{
      int k,n,i,j,flag,*p;
      char a[50][50],b[50];
      scanf("%d%d",&k,&n);
      for(i=0;i<k;i++)
      scanf("%s",a[i]);
      for(i=0;i<n;i++)
       {flag=0;
                      scanf("%s",b);
       if(strlen(b)>=47)
        printf("Good\n");
        else
        {
            for(j=0;j<k;j++){
            if(strstr(b,a[j]))
            {flag=1;
            break;}}
            if(flag==1)
            printf("Good\n");
            else
            printf("Bad\n");
            }
            }
            return 0;
            }
