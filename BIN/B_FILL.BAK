#include<conio.h>
#include<graphics.h>
b_fill(int x,int y,int f_color,int b_color)
	{
		if((getpixel(x,y)!=f_color)&&(getpixel(x,y)!=b_color))
		{
			putpixel(x,y,f_color);
			b_fill(x+1,y,f_color,b_color);
			b_fill(x-1,y,f_color,b_color);
			b_fill(x,y+1,f_color,b_color);
			b_fill(x,y-1,f_color,b_color);
		}
	}
void main()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\TURBOC3\BGI");
		clrscr();
		circle(250,100,40);
		b_fill(250,100,1,15);
		outtextxy(50,50,"Name:Hammad Khan");
		getch();
		closegraph();
	}