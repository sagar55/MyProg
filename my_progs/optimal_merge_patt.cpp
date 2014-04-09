#include<stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include<cstdlib>
#define N 100001
#define IN 1999999991
using namespace std;
struct node
{
      int v;
      node *l;
      node *r;
      };
void min_heapify(node a[],int i);
void heap_dec_key(node a[],int i);
node *heap_ext_min(node a[]);
void heap_insert(node a[]);
void inorder(node *root);
int n,q=100,ans;
node *getnode(int n)
{
     node *temp=(node*)malloc(sizeof(node));
     temp->v=n;
     temp->l='\0';
     temp->r='\0';
     return temp;
}
void build_min_heap(node a[])
{
    int i ;
   for(i=n/2;i>=1;i--)
    min_heapify(a,i);
}
node *heap_ext_min(node a[])
{
      node *head,*t;
      int temp;
      a[q].v=a[n].v;
      a[q].l=a[n].l;
      a[q].r=a[n].r;
            temp=a[1].v;
            a[1].v=a[q].v;
            a[q].v=temp;
            t=a[1].l;
            a[1].l=a[q].l;
            a[q].l=t;
            t=a[1].r;
            a[1].r=a[q].r;
            a[q].r=t;
            head=&a[q++];
   // printf(":(%d\n",a[1].v);
    n--;
    min_heapify(a,1);
    return head;
}
void heap_insert(node a[])
{
     heap_dec_key(a,n);
     }
void heap_dec_key(node a[],int i)
{
int temp;
node *t;
while(i>1&&a[i/2].v>a[i].v)
{
temp=a[i].v;
a[i].v=a[i/2].v;
a[i/2].v=temp;
t=a[i].l;
a[i].l=a[i/2].l;
a[i/2].l=t;
t=a[i].r;
a[i].r=a[i/2].r;
a[i/2].r=t;
i=i/2;
}
}

void min_heapify(node a[],int i)
{

                int l=2*i,r=2*i+1,min,temp;
                node *t;
                if(l<=n&&a[l].v<a[i].v)
                min=l;
                else
                min=i;
                if(r<=n&&a[r].v<a[min].v)
                min=r;
                if(min!=i)
                {
                 temp=a[i].v;
            a[i].v=a[min].v;
            a[min].v=temp;
            t=a[i].l;
            a[i].l=a[min].l;
            a[min].l=t;
            t=a[i].r;
            a[i].r=a[min].r;
            a[min].r=t;
                min_heapify(a,min);
                }
}
void inorder(node *root,int count)
{
     if(root!='\0')
     {
                   inorder(root->l,count+1);
                //   printf("%d\t",root->v);
                   if(root->l=='\0'){
                              //       printf("%d %d\n",root->v,count);
                   ans+=(root->v)*count;}
                   inorder(root->r,count+1);
                   count--;
     }
}
int solve()
{
    int i,j,val,count=0;
    node a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&val);
    a[i].v=val;
    a[i].l='\0';
    a[i].r='\0';
    }
    build_min_heap(a);
     while(n>1)
    {
               node *min1,*min2;
               min1=heap_ext_min(a);
               min2=heap_ext_min(a);
                n++;
                a[n].l=min1;
               a[n].r=min2;
               a[n].v=min1->v + min2->v;
               heap_insert(a);
               }
               printf("%d\n",a[1].v);
             //   printf("%d: \n",a[1]);
               //for(i=1;i<=5;i++)
               // if(a[i].l||a[i].r=='\0')
                //printf("%d :\n",a[i].v);
                inorder(&a[1],count);
                printf("\noptimal value is %d\n",ans);
}
main()
{
    solve();
    system("pause");
    return 0;
}
