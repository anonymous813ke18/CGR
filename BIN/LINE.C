#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\TURBOC3\BGI");
	line(100,100,200,100);
	getch();
	closegraph();
}