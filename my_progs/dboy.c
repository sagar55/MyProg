#include<stdio.h>

int N,fuel[501],rest[501],values[1001],max;

int solve()
{
    int i,j,min,sum=0;
  
    for(i=1;i<=2*max;i++) if(!values[i])
    {
         min=1000000;
         for(j=1;j<=(i-j);j++) min=min<(values[j]+values[i-j])?min:(values[j]+values[i-j]);
         values[i]=min;
    }
    for(i=0;i<N;i++) sum+=values[2*rest[i]];
    printf("%d\n",sum);
}
int main()
{
    int T,i,q;
    scanf("%d",&T);
    while(T--)
    {
                scanf("%d",&N);
                max=0;
              for(i=0;i<N;i++) { scanf("%d",&rest[i]);
                if(rest[i]>max)
                max=rest[i];}
                  for(i=0;i<=2*max;i++)
                  values[i]=0;
              for(i=0;i<N;i++) {scanf("%d",&q);
              values[q]=1;}
              solve();
    }
    return 0;
}
