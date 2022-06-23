#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
	{
		int gd=DETECT,gm,sx=0,sy=0,arr[100],k=0,n,i,option;
		initgraph(&gd,&gm,"C:\TURBOC3\BGI");
		clrscr();
		printf("Enter the number of sides:");
		scanf("%d",&n);
		for(i=0;i<n*2;i++)
			{
				k++;
				printf("Enter the co-ordinates of point %d:\n",k);
				scanf("%d%d",&arr[i],&arr[i+1]);
				i++;
			}
		arr[i]=arr[0];
		arr[i+1]=arr[1];
		clrscr();
		for(i=0;i<n*2;i++)
			{
				line(arr[i],arr[i+1],arr[i+2],arr[i+3]);
				i++;
			}
		printf("Enter\n1-To shear at x-axis\n2-To shear at y-axis\n3-Exit program\n");
		scanf("%d",&option);
		do
			{
				if(option==1)
					{
						printf("Enter the shearing factor for x-axis:");
						scanf("%d",&sx);
						break;
					}
				else if(option==2)
					{
						printf("Enter the shearing factor for y-axis:");
						scanf("%d",&sy);
						break;
					}
				else if(option==3)
					{
						clrscr();
						printf("Ending program....");
						for(i=0;i<=9999;i++)
							{
							}
						printf("Program terminated.\nEnter any key to exit");
					}
				else
					printf("Wrong choice");
			}
		while(option!=3);
		clrscr();
		for(i=0;i<n*2;i++)
			{
				if(arr[i+3]>arr[i+1])
					{
						arr[i+2]=arr[i+2]+sx;
					}
				else if(arr[i+3]<arr[i+1])
					{
						arr[i]=arr[i]+sx;
					}
				else if(arr[i+3]==arr[i+1])
					{
						arr[i]=arr[i];
						arr[i+2]=arr[i+2];
					}
				else if(arr[i]>arr[i+2])
					{
						arr[i+1]=arr[i+1]+sy;
					}
				else if(arr[i+2]>arr[i])
					{
						arr[i+3]=arr[i+3]+sy;
					}
				else if(arr[i]==arr[i+2])
					{
						arr[i+1]=arr[i+1];
						arr[i+3]=arr[i+3];
					}
				i++;
			}
		arr[i]=arr[0];
		arr[i+1]=arr[1];
		for(i=0;i<n*2;i++)
			{
				line(arr[i],arr[i+1],arr[i+2],arr[i+3]);
				i++;
			}
		getch();
		closegraph();
	}
