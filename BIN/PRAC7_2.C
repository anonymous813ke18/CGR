#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

void main()
{
int gd=DETECT,gm;
int i;
int x2,y2,x1,y1,x,y;
printf("Roll no:- 20434\n");
printf("Name:- Hammad Khan\n");
printf("Enter x,y coordinates of the 2 line end points:\n");
printf("x1,y1,x2,y2\n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(100,2,"Roll no:- 20434\n");
outtextxy(100,10,"Name:- Hammad Khan\n");
outtextxy(100,20,"Original line before scaling:\n");
line (x1,y1,x2,y2);
outtextxy(100,30,"\n Enter x and y scaling factors\n");
printf("\n\n\n\n");
scanf("%d%d",&x,&y);
x1=(x1*x);
y1=(y1*y);
x2=(x2*x);
y2=(y2*y);
printf("\n Line after scaling");
line(x1,y1,x2,y2);
getch();
closegraph();
}