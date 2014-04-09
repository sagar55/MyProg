#include<stdio.h>
main()
{
      int i,j,k,n,a[11][11],b[11],l;
      printf("enter no of sets\n");
      scanf("%d",&n);
      for(i=1;i<11;i++)
      {
      b[i]=0;
      for(j=1;j<11;j++)
      a[i][j]=0;
      }
      for(i=1;i<=n;i++)
      {
            printf("enter no of elements in %d th set\t",i);
      scanf("%d",&k);
      printf("enter elements of set %d\n",i);
      for(j=1;j<=k;j++)
      scanf("%d",&a[i][j]);
      }
      printf("\n");
      for(i=1;i<=n;i++)
      {
      b[a[i][1]]=-1;
      k=a[i][1];
      l=2;
      while(a[i][l]>0)
      {
      b[a[i][l]]=k;
      k=a[i][l];
      l++;
      }
      }
//      for(i=1;i<=10;i++)
//      printf("%d ",b[i]);
   //   printf("\n");
   int p=0;
  
    while(p!=-1){
        
   printf("enter no to find which set it belongs\t");
      scanf("%d",&i);
      printf("\n");
      while(b[i]!=-1)
      {
      i=b[i];
      }
      for(j=1;j<=n;j++)
      if(a[j][1]==i)
     { printf("it belongs to set : %d\n",j);
     break;
     }
     printf("enter ids of two set for union \n");
      scanf("%d%d",&i,&j);
      b[a[i][1]]=a[j][1];
      
   printf("enter -1 to exit otherwise enter some arbitary no to continue\n");
      scanf("%d",&p);
  
     }
      return 0;
      }
      
      
      

