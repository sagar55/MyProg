#include<stdio.h>
int insertion_sort(int a[],int n)
{
int i,j,key,count=0;
            for(j=1;j<n;j++)                         
            {
                   key=a[j];
                   i=j-1;
                   while(i>=0&&a[i]>key)
                   {
                                        a[i+1]=a[i];
                                        i=i-1;
                                        count++;
                   }
                   a[i+1]=key;
            }
return count;                    
}    
main()
{
      int i,t,n,j,a[100],count;
      scanf("%d",&t);
      while(t){
               scanf("%d",&n);
               for(j=0;j<n;j++)
               scanf("%d",&a[j]);
               count=insertion_sort(a,n);
               printf("%d\n",count);
               t--;}
               getch();
               }               
