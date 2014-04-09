 #include<stdio.h>

int BS2(int b[],int l,int r,int key)
{
    int m;
    while((r-l)>1)
    {
                 m=l+(r-l)/2;
                 if(b[m]>=key)
                 r=m;
                 else 
                 l=m;
                 }
                 return r;
                 }
   main()
       {
             int a[100],temp[1000],t,n,len,i;
             len=1;
             scanf("%d",&n);
             for(i=0;i<n;i++)
               scanf("%d",&a[i]);
               temp[0]=a[0];
               for(i=1;i<n;i++)
               {
                               if(a[i]<temp[0])
                              { temp[0]=a[i]; printf("1.%d  ",a[i]);}
                               else if(a[i]==temp[len-1]+1) {
                               temp[len++]=a[i];printf("2.%d  ",a[i]);}
                               else{
                               temp[BS2(temp,-1,len-1,a[i])]=a[i];
                               printf("3.%d  ",a[i]);}
                               }
                                 printf("\n");
                               for(i=0;i<len;i++)
                               printf("%d   ",temp[i]);
                               printf("\n%d",len);
                               getch();
                               }
                               
                               
                               
                               
               
             
