#include<stdio.h>
main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l,m,ee;
    int bb=0,aa=2;
    freopen("op.txt","w",stdout);
    freopen("ip.txt","r",stdin);
    printf("x=total overhead (RREQ initiated +RREQ retried +RREQ fwd + RREP pkts initiated as dest + RREP pkts fwd\n");
    printf("y=total data received\n");
    printf("q=pkts drop due to retransmission limit\n");
    printf("r=pkts retransmission due to ACK timeout\n");
    printf("s=pkts from network\n");
    printf("q/(r+s) =DATA frame collision rate\n");
    printf("t=total bytes acks\n");
    printf("u=total bytes resent\n");
    printf("v=total bytes sent\n");
    printf("t/(u+v) =transmission efficiency\n");
    printf("ee=avg end to end delay\n\n");
  
    printf("            x      :        y       :     x/(x+y)   :      q      :       r      :         s        :    q/(r+s)   :         t           :          u         :       v          :   t/(u+v)      :    ee    \n\n");
    float yy=0;
    while(scanf("%f",&a)!=EOF){
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f",&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&ee);
        m=a+b+c+d+e;
        printf("<%d_s%d>",aa,bb%3+1);
        printf("     %.0f           %.0f            %.3f   ",m,f,m/(m+f));
        printf("     %.0f            %.0f            %.0f           %.3f     ",g,h,i,g/(h+i));
        printf("         %.2e              %.0f                %.2e             %.3f           %.4f \n",j,k,l,j/(k+l),ee);
        bb++;
        yy+=ee;
        if(bb%3==0){
        aa+=2;
        printf(" \tAVG e2e delay : %.4f \n",yy/3);
        yy=0;
            }
        }
        fclose(stdin);
        bb=1;
        freopen("ip2.txt","r",stdin);
        int mm=5;
        while(scanf("%f",&a)!=EOF){
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f",&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&ee);
        m=a+b+c+d+e;
        printf("<s%d_m%d>",bb,mm);
        printf("     %.0f           %.0f            %.3f   ",m,f,m/(m+f));
        printf("     %.0f            %.0f            %.0f           %.3f     ",g,h,i,g/(h+i));
        printf("         %.2e              %.0f                %.2e             %.3f         %.4f   \n",j,k,l,j/(k+l),ee);
        mm+=10;
        if(mm==55)
        {bb++;
        mm=5;
        printf("\n");}
        }
    return 0;
}
