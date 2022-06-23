#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
int i;
int x2,y2,x1,y1,x,y;
printf("Roll no:- 20434\n");
printf("Name:- Hammad Khan\n");
printf("Enter the x,y coordinates of 2 line end points:\n");
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Roll no:- 20434\n");
printf("Name:- Hammad\n");
printf("Orignal line before Translation:\n");
line(x1,y1,x2,y2);
printf("\n Now enter x and y translation factors\n");
scanf("%d%d",&x,&y);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;
printf("Line after translation\n");
line(x1,y1,x2,y2);
getch();
closegraph();
}
