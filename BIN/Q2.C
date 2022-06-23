#include<stdio.h>

void main(){
	int marks = 0;
	clrscr();

	printf("Enter the marks: ");
	scanf("%d",&marks);

	if(marks < 0 || marks > 100)
		printf("Wrong Input!");
	else if(marks < 50)
		printf("Grade F");
	else if(marks > 50 && marks < 60)
		printf("Grade E");
	else if(marks > 60 && marks < 70)
		printf("Grade D");
	else if(marks > 70 && marks < 80)
		printf("Grade C");
	else if(marks > 80 && marks < 90)
		printf("Grade B");
	else
		printf("Grade A");

	getch();
}
