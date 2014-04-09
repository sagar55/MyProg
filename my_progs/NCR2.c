#include <stdio.h>

int main()
{
	long long sum=0,ans=0,n,a[10001],i,j,flag=0,max,index,dp,dq,p,q;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
	scanf("%lld",&a[i]);
	sum+=a[i];
	}
	sum/=n;
	for(i=0;i<n;i++)
	{
		max=-1;
		for(j=0;j<n;j++)
		{
		if(a[j]!=sum)
		flag=1;
		if(a[j]>max)
		{max=a[j];
		index=j;
		}
		}
			if(!flag)
		{
	    printf("%lld\n",ans);
	    return 0;
		}else{
		if(index==0)
		p=n-1;
		else
		p=index-1;
		if(index==n-1)
		q=0;
		else
		q=index+1;
		dp=1;
		dq=1;
		while(a[p]==a[q])
		{
            dp++;
            dq++;
        if(p==0)
		p=n-1;
		else   
		p=p-1;
		if(q==n-1)
		q=0;
		else
		q=q+1;
		if(dp>=n/2)
		break;
    }
			if(a[p]<a[q]){
                if(a[p]<sum&&sum-a[p]<a[index]-sum)
                {
                ans=ans+(sum-a[p])*dp; 
                 a[index]-=sum-a[p];
                    a[p]=sum;
              printf("hi1 %lld %lld\n",a[p],a[index]);
                }
                else{
                ans=ans+(a[index]-sum)*dp;
			a[p]+=a[index]-sum;
			a[index]=sum;
			 printf("hi2 %lld %lld\n",a[p],a[index]);
               
        }}
			else{
		if(a[q]<sum&&sum-a[q]<a[index]-sum)
                {
                ans=ans+(sum-a[q])*dq;
                a[index]-=sum-a[q];
                a[q]=sum;
               printf("hi3 %lld %lld\n",a[p],a[index]);
                }
                else{
                ans=ans+(a[index]-sum)*dq;
			a[q]+=a[index]-sum;
			a[index]=sum;
               printf("hi4 %lld %lld\n",a[p],a[index]);
        }
        }	
		}
	printf("%lld %lld %lld %lld %lld\n",p,q,dp,dq,ans);
	}
	printf("%lld\n",ans);
scanf("%d",&n);
    return 0;
}
