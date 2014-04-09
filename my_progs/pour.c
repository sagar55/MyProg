#include<stdio.h>
int gcd(int i,int j){
		 if(j==0)
            return i;
            else
              return gcd(j,i%j);
		}
int minnum(int a,int b,int c){
		int va=0, vb=0, count=0,tmp,count2=0;
		if(c==0)return 0;
		if(a==c || b==c)return 1;
		if(a==0 || b==0)return -1;
		if(c%gcd(a,b)!=0)return -1;
		if(c>a && c>b)return -1;
		while(va!=c && vb!=c){
								count++;
								if(va==0)va=a;
								else if(vb==b)vb=0;
								else if(b-vb>=va){vb+=va;va=0;}
								else{ va-=b-vb;vb=b;}
							 }
							 va=0;vb=0;
	 	while(va!=c && vb!=c){
								count2++;
								if(vb==0)vb=b;
								else if(va==a)va=0;
								else if(a-va>=vb){va+=vb;vb=0;}
								else{ vb-=a-va;va=a;}
							 }
					
		return (count2>count)?count:count2;
		}
int main(){
int a,b,c,t;
scanf("%d",&t);		
while(t-- >0){
					scanf("%d%d%d",&a,&b,&c);
					if(minnum(a,b,c)==-1) printf("NO\n");
					else
					printf("YES\n");
					}
	
	return 0;	}
