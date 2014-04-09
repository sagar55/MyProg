#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100001];
main()
{
    int i,j,k,m,n;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    if(m<3)
    printf("0\n");
    else if(m==3)
    {
        if(a[1]-a[0]==a[2]-a[1])
        printf("0\n");
        else
        printf("3\n%d %d %d\n",a[0],a[1],a[2]);
    }
    else{
        sort(a,a+m);
        int max=0,set[100001],ans[100001],d;
      //  while(1){
            int inc[100001];
            memset(inc,0,sizeof(inc));
            i=0;
        inc[a[i]]=1;
        inc[a[i+1]]=1;
        set[0]=a[i];
        set[1]=a[i+1];
        j=1;
        for(i=i+2;i<m;i++)
        {       
            int flag=1;
            for(k=1;k<=j;k++){
         d=a[i]-set[k];
         if((set[k]-d)>=0&&inc[set[k]-d]){
         flag=0;
         break;}}
       //  printf("%d %d::\n",d,set[j]);
         if(flag)
         {
         inc[a[i]]=1;
         set[j+1]=a[i];
         j++;
            }
        }
        if(j>max)
        {max=j;
            for(i=0;i<=j;i++)
            ans[i]=set[i];
        }
        printf("%d\n",j+1);
        for(i=0;i<=j;i++)
        printf("%d ",ans[i]);
        printf("\n");
  //  }       
    }
//scanf("%d",&i);
return 0;
}
            
                
          
                
                
                
                
                
                
                
        
        
    
    
    
