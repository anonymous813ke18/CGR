#include<stdio.h>

void main(){
	int m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, total = 0;
	float per;
	clrscr();

	printf("Enter marks of 5 subjects: \n");
	scanf("%d",&m1);
	scanf("%d",&m2);
	scanf("%d",&m3);
	scanf("%d",&m4);
	scanf("%d",&m5);

	total =m1 + m2 + m3 + m4 + m5;
	per = total/5;
	printf("Total Marks = %d Percentage = %f %\n",total,per);

	if(per < 50)
		printf("Grade F");
	else if(per > 50 && per < 60)
		printf("Grade E");
	else if(per > 60 && per < 70)
		printf("Grade D");
	else if(per > 70 && per < 80)
		printf("Grade C");
	else if(per > 80 && per < 90)
		printf("Grade B");
	else
		printf("Grade A");

	getch();

}