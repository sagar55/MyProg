#include<stdio.h>
int lcm(int,int);
int main(){

    int a,b,l;
    printf("Enter any two positive integers ");
    scanf("%d%d",&a,&b);

    if(a>b)
    l = lcm(b,a);
    else
        l = lcm(a,b);

    printf("LCM of two integers is %d",(a*b)/l);
getch();
    return 0;
}

int lcm(int a,int b){
   static int temp = 1;
    if(b==0)
         return a;
     temp++;
     return lcm(b,a%b);
}
