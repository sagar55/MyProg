#include<stdio.h>
main()
{
      int i,j,k,p,n,q,t;
      char a[1000],b[1000];
      scanf("%d\n",&t);
      while(t--)
      {
                j=0;
                q=0;
                gets(a);
               n=strlen(a);
              for(i=0;i<n;i++)
              {
                    if(a[i]<65||a[i]>90)
                     {    
                        b[j]=a[i-3];
                      j++;
                      k=i-q-3;
                      p=q;
                      while(k){
                      b[j]=a[p]; j++;
                      p++;
                      k--;
                      }
                      b[j]=b[i];
                      j++; 
                      q=i+1;
                      printf("%d\t%d\n",q,j);
                      }
                }
                printf("%s\n",b);
                }
                return 0;
                }
