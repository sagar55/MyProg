 #include<stdio.h>
 int BS(int a[][2],int start,int end,int item1,int item2)
{int mid=0;
      while(start<end)
      {
               mid=(start+end)/2 ;
                         if(a[mid][0]==item1&&a[mid][1]==item2)
                         {
                           break;
                         }             
                         else if(a[mid][0]<item1&&a[mid][1]<item2)
                         start=mid+1;
                         else
                         end=mid-1;
      }
      
      if(a[mid][0]<item1&&a[mid][1]<item2){
      return mid+1;}
       else{
  return mid;}
    
       }
       
int BS2(int b[][2],int l,int r,int key1,int key2)
{
    int m;
    while((r-l)>1)
    {
                 m=l+(r-l)/2;
                 if(b[m][0]>=key1&&b[m][1]>=key2)
                 r=m;
                 else 
                 l=m;
                 }
                 return r;
                 }
       main()
       {
             int a[100001][2],temp[100001][2],t,n,len,i,p;
             len=1;
             scanf("%d",&n);
             for(i=0;i<n;i++)
               scanf("%d%d",&a[i][0],&a[i][1]);
               temp[0][0]=a[0][0];
               temp[0][1]=a[0][1];
               for(i=1;i<n;i++)
               {
                               if(a[i][0]<temp[0][0]&&a[i][1]<temp[0][1])
                              { temp[0][0]=a[i][0];temp[0][1]=a[i][1]; }
                               else if(a[i][0]>temp[len-1][0]&&a[i][1]>temp[len-1][1]) {
                               temp[len][0]=a[i][0];temp[len++][1]=a[i][1];}
                               else{
                                    p=BS(temp,0,len-1,a[i][0],a[i][1]);
                               temp[p][0]=a[i][0];
                               temp[p][1]=a[i][1];
                              }
                               }
                               printf("%d\n",len);
                               getch();
                               }
                               
                               
                               
                               
               
             
