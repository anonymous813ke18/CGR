#include<conio.h>
#include<graphics.h>
floodfill(int x,int y,int old,int new1)
	{
		int current=getpixel(x,y);
		if(current==old)
			{
				putpixel(x,y,new1);
				floodfill(x+1,y,old,new1);
				floodfill(x-1,y,old,new1);
				floodfill(x,y+1,old,new1);
				floodfill(x,y-1,old,new1);
			}
	}
void main()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\TURBOC3\BGI");
		clrscr();
		line(100,100,50,150);
		line(50,150,150,150);
		line(150,150,100,100);
		floodfill(100,135,8,1);
		outtextxy(20,20,"Name:Hammad Khan");
		getch();
	}