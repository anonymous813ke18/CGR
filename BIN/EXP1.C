#include<conio.h>
#include<graphics.h>
void main()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\TURBOC3\BGI");
		rectangle(280,45,440,135);
		circle(400,165,30);
		circle(320,165,30);

		rectangle(40,45,150,120);
		rectangle(60,60,140,105);
		rectangle(10,165,180,210);
		line(140,120,160,165);
		line(60,120,40,165);

		outtextxy(20,20,"Name:Hammad Khan");
		getch();
	}