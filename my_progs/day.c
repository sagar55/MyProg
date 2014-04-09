#include<stdio.h> 
#include<math.h> 
main() 
{ 
       int x;
int t=0,id=15,im=10,iy=1582,iy1=1582,id1,im2=9,im1=9,dr,dc=0,td,tm,ty; 
int smc[12]; 
smc[0]=smc[2]=smc[4]=smc[6]=smc[7]=smc[9]=smc[11]=31,smc[3]=smc[5]=smc[8]=smc[10]=30; 
scanf("%d",&x);
while(x--){
scanf("%d %d %d",&td,&tm,&ty); 
t=0;id=15;im=10;iy=1582;iy1=1582;id1;im2=9;im1=9;dc=0;
smc[0]=smc[2]=smc[4]=smc[6]=smc[7]=smc[9]=smc[11]=31,smc[3]=smc[5]=smc[8]=smc[10]=30; 
id1=td; 
while (iy<ty) 
{ 
if (((((iy)%4)==0) && (((iy)%100)!=0)) || ((((iy)%100)==0) && (((iy)%400)==0))) 
smc[1]=29; 
else 
smc[1]=28; 
while (im1<=11) 
{ 
if (t==0) 
dr=smc[im-1]-id,++t; 
else 
dr=smc[im1]; 
while (dr>0) 
++dc,--dr; 
++im1; 
} 
im1-=12,++iy; 
} 
if (((((iy)%4)==0) && (((iy)%100)!=0)) || ((((iy)%100)==0) && (((iy)%400)==0))) 
smc[1]=29; 
else 
smc[1]=28; 
while (im1<tm-1) 
{ 
dr=smc[im1]; 
while (dr>0) 
++dc,--dr; 
++im1; 
} 
if ((iy1==ty) && (im2=(tm-1))) 
id1=td-id; 
while (id1>0) 
++dc,--id1; 
if ((dc%7)==0) 
printf("Friday\n"); 
if ((dc%7)==1) 
printf("Saturday\n"); 
if ((dc%7)==2) 
printf("Sunday\n"); 
if ((dc%7)==3) 
printf("Monday\n"); 
if ((dc%7)==4) 
printf("Tuesday\n"); 
if ((dc%7)==5) 
printf("Wednesday\n"); 
if ((dc%7)==6) 
printf("Thursday\n"); }
getch ();
}
