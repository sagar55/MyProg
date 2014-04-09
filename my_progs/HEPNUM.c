#include<stdio.h>
#include<string.h>
main()
{
      int i,j,n,l1,l2,p,q;
      char a[100001],b[100001];
     scanf("%s%s",a,b);
      while(a[0]!='*'&&b[0]!='*')
      {
      
                           l1=strlen(a);l2=strlen(b);
                           p=l1;q=l2;
                           i=0;j=0;
                           while(a[i]=='0'&&i<p)
                           { l1--;
                           i++;} 
                           while(b[j]=='0'&&j<q)
                           {l2--;
                           j++;}
                           if(p-i>q-j)
                           printf(">\n");
                           else if(p-i<q-j)
                           printf("<\n");
                           else{
                          while(a[i]==b[j]&&i<p&&j<q)
                          {i++;j++;}
                          if(a[i]>b[j])
                           printf(">\n");
                           else if(b[j]>a[i])
                          printf("<\n");
                          else
                          printf("=\n");}
                           scanf("%s%s",a,b);
                          }
                          return 0;
                          }
                           
