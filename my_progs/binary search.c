//searching of a no. using binary search
main()
{
      int a[20],i,n,mid,start,end,item,f=0;
      printf("enter the no of elements you want to enter\t");
      scanf("%d",&n);
      printf("enter the element of the array in increasing order \n");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      printf("\n");
      }
      printf("enter the element to be searched from above array\t");
      scanf("%d",&item);                
      start=0;
      end=n-1;
      while(start<=end)
      {
               mid=(start+end)/2 ;
                         if(a[mid]==item)
                         {
                           f=1;
                           break;
                         }             
                         else if(a[mid]<item)
                         start=mid+1;
                         else
                         end=mid-1;
      }
      if(f==0)
      printf("not found");
      else
      printf("found at %d th position",mid+1);
      getch();
}
                     
