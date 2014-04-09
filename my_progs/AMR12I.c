#include<stdio.h>
void program();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    program();
    return 0;
}

void program()
{
    int n,k,i,x;
    char a[20003],last;
    scanf("%d %d",&n,&k);
    scanf("%s",a);
    last=a[0];
    int no=1,flag=0;
    int count=1;
    for(i=1;i<n;i++)
    {
        if(a[i]==last && count<k)
        {

            count++;
            if(count==k) flag=1;
            continue;
        }
        if(count==k) flag=1;
        no++;
        count=1;
        last=a[i];
    }
    if(flag==1)
    {
        printf("%d\n",no);
    }
    else
    printf("-1\n");
}
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,n,k,i,l,pr,gr;
    char a[20050];
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d %d",&n,&k);
              scanf("%s",a);
              l=1;
              pr=0;
              gr=0;
              for(i=0;i<n-1;i++)
              {
                                      if(a[i]==a[i+1])
                                      l++;
                                      else
                                      {
                                        //  printf("%d\n",l);
                                          if(l>=k)
                                          pr=1;
                                          gr = gr + (int)ceil((float)l/(float)k) ;
                                          l=1;
                                      }
                                     // printf("%d\n",gr);
              }
              if(l>=k)
              pr=1;
              gr = gr + (int)ceil((float)l/(float)k) ;
              if(pr==0)
              printf("-1\n");
              else
              {
                  printf("%d\n",gr);
                  }
    }
    return 0;
}
              
    */
