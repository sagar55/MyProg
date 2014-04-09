int n;
 void min_heapify(int a[],int i)
{
     
                int l=2*i+1,r=2*i+2,min,temp;
                if(l<n&&a[l]<a[i])
                min=l;
                else
                min=i;
                if(r<n&&a[r]<a[min])
                min=r;
                if(min!=i)
                {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
                min_heapify(a,min);
                }
                }    
void build_min_heap(int a[])
{  
    int i;
   for(i=n/2;i>=0;i--)
    min_heapify(a,i);
}                    
void heap_sort(int a[])
{
     int i,s=n,temp;
     build_min_heap(a);
     for(i=s-1;i>0;i--)
     {n--;
                       temp=a[0];
                       a[0]=a[i];
                       a[i]=temp;    
       min_heapify(a,0);
     }
}
                
main()
{
      int a[100],j,p;
      printf("enter how many no.s u wanna to sort\t");
      scanf("%d",&n);p=n;
      for(j=0;j<n;j++)
      scanf("%d",&a[j]);
      heap_sort(a);
      printf("\n\n");
      for(j=0;j<p;j++)
      printf("%d\n",a[j]);
      getch();
      }

                                          
