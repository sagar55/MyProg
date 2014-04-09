#include<stdio.h>
main()
{
      int j,x,y,n,q,temp,max1,max2;
      char c;
      scanf("%d",&n);
      int a[n+1];
      for(j=0;j<n;j++)
            scanf("%d",&a[j]);
      scanf("%d",&q);
      while(q--)
      {c=getchar();
                scanf("%c%d%d",&c,&x,&y);
                if(c=='Q'){
                            max1=0;max2=0;
            for( j=x-1;j<y;j++){
                if(a[j]>max2){
                    max2=a[j];
                    if(max2>max1){
                        temp=max1;
                        max1=max2;
                        max2=temp;
                    }
                }
            }     
       printf("%d\n",max1+max2);
       }
       else
        a[x-1]=y;}
      return 0;
      }
                

