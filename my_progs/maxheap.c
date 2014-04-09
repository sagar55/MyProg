#include<stdio.h>
int a[1000];
int n;
left(int i)
{
       return (2*i);
       }
right(int i)
{
        return(2*i+1);
        }
void maxheapify(int i)
{   
    int max,largest =i;
    int l=left(i);
    int r=right(i);
    if(l<=n && a[l]>a[i])
    largest=l;
    
    if(r<=n &&  a[r]>a[largest])
    largest=r;
    if(largest !=i)
    {
               int temp=a[i];
               a[i]=a[largest];
               a[largest]=temp;
               maxheapify(largest);
               }
               }
               makeheap()
               {
                         int i;
                   for(i=n/2;i>=1;i--)
                   maxheapify(i);
                     }   
int main()
{
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    makeheap();
    for(i=1;i<=n;i++)
    printf("%d ",a[i]);
    scanf("%d",&n);
    return 0;
}
