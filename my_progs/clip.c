#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//#include<conio.h>

typedef unsigned int outcode;
enum { TOP=0x1, BOTTOM=0x2, RIGHT=0x4, LEFT=0x8 };

void lineclip(x0,y0,x1,y1,xwmin,ywmin,xwmax,ywmax )
float x0,y0,x1,y1,xwmin,ywmin,xwmax,ywmax;
{

int gd,gm;
outcode code0,code1,codeout;
int accept = 0, done=0;

code0 = calcode(x0,y0,xwmin,ywmin,xwmax,ywmax);
code1 = calcode(x1,y1,xwmin,ywmin,xwmax,ywmax);

do{
if(!(code0 | code1))
{ accept =1 ; done =1; }
else
if(code0 & code1) done = 1;
else
{
float x,y;
codeout = code0 ? code0 : code1;
if(codeout & TOP)
{
x = x0 + (x1-x0)*(ywmax-y0)/(y1-y0);
y = ywmax;
}
else
if( codeout & BOTTOM)
{
x = x0 + (x1-x0)*(ywmin-y0)/(y1-y0);
y = ywmin;
}
else
if ( codeout & RIGHT)
{
y = y0+(y1-y0)*(xwmax-x0)/(x1-x0);
x = xwmax;
}
else
{
y = y0 + (y1-y0)*(xwmin-x0)/(x1-x0);
x = xwmin;
}
if( codeout == code0)
{
x0 = x; y0 = y;
code0=calcode(x0,y0,xwmin,ywmin,xwmax,ywmax);
}
else
{
x1 = x; y1 = y;
code1 = calcode(x1,y1,xwmin,ywmin,xwmax,ywmax);
}
}
} while( done == 0);

if(accept) line(x0+xwmax+300,y0,x1+xwmax+300,y1);

rectangle(xwmin+xwmax+300,ywmin,xwmax+xwmax+300,ywmax);

getch();

}


int calcode (x,y,xwmin,ywmin,xwmax,ywmax)
float x,y,xwmin,ywmin,xwmax,ywmax;
{

	
	int code = 0;	
	
	if(y > ywmax) code = code | TOP ;
	if(y < ywmin) code = code | BOTTOM;
	if(x > xwmax) code = code | RIGHT;
	if(x < xwmin) code = code | LEFT;
	
	return code;
}


main()
{

float x2,y2,x1,y1,xwmin,ywmin,xwmax,ywmax;
int gd=DETECT,gm;


printf("\nEnter the co-ordinates of Line :");

printf("\nX1 Y1 : ");
scanf("%f %f",&x1,&y1);

printf("\nX2 Y2 : ");
scanf("%f %f",&x2,&y2);


printf("\nEnter the co_ordinates of window :\n ");
printf("\nxmin ymin  ");
scanf("%f %f",&xwmin,&ywmin);
printf("\nxmax ymax  ");
scanf("%f %f",&xwmax,&ywmax);

initgraph(&gd,&gm,NULL);
line(x1,y1,x2,y2);
rectangle(xwmin,ywmin,xwmax,ywmax);
delay(1000);


//cleardevice();

lineclip(x1,y1,x2,y2,xwmin,ywmin,xwmax,ywmax );
getch();
closegraph();

}


