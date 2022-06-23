#include<stdio.h>
#include<conio.h>

void main(){
	char arr[6][6] = {{' ','3',' ',' ',' ',' '},{' ',' ',' ','3','6',' '},{'5',' ','1','4',' ','2'},{'3',' ','4','6',' ','1'},{' ','1','5',' ',' ',' '},{' ',' ',' ',' ','2',' '}};
	int i, j, row, column, flag, exit = 0;
	char ch;
	clrscr();
	while(exit != 2){
		clrscr();
		flag = 0;
		for(i = 0; i < 6; i++){
			for(j = 0; j < 6; j++){
				printf("|%c\t",arr[i][j]);
			}
			printf("|\n");
		}
		printf("Enter \n1-Continue\n2-Exit\n");
		scanf("%d",&exit);
		switch(exit){
		case 1:
			clrscr();

			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					printf("|%c\t",arr[i][j]);
				}
				printf("|\n");
			}

			printf("Enter Row: ");
			scanf("%d",&row);
			printf("Enter Column: ");
			scanf("%d",&column);
			if(arr[row][column] == ' '){
				flag = 0;
				clrscr();
				for(i = 0; i < 6; i++){
					for(j = 0; j < 6; j++){
						printf("|%c\t",arr[i][j]);
					}
					printf("|\n");
				}
				getch();
				printf("Enter the number: ");
				scanf("%c",&ch);
			}
			else{
				flag = 1;
			}
			if(column == 0 || column == 1){
				if(row == 0 || row == 1 || row == 2){
					for(i = 0; i <= 2; i++){
						for(j = 0; j <= 1; j++){
							if(arr[i][j] == ch){

								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
				if(row == 3 || row == 4 || row == 5){
					for(i = 3; i <= 5; i++){
						for(j = 0; j <= 1; j++){
							if(arr[i][j] == ch){
								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
			}
			if(column == 2 || column == 3){
				if(row == 0 || row == 1 || row == 2){
					for(i = 0; i <= 2; i++){
						for(j = 2; j <= 3; j++){
							if(arr[i][j] == ch){
								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
				if(row == 3 || row == 4 || row == 5){
					for(i = 3; i <= 5; i++){
						for(j = 2; j <= 3; j++){
							if(arr[i][j] == ch){
								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
			}
			if(column == 4 || column == 5){
				if(row == 0 || row == 1 || row == 2){
					for(i = 0; i <= 2; i++){
						for(j = 4; j <= 5; j++){
							if(arr[i][j] == ch){
								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
				if(row == 3 || row == 4 || row == 5){
					for(i = 3; i <= 5; i++){
						for(j = 4; j <= 5; j++){
							if(arr[i][j] == ch){
								flag = 1;
							}
							else
								flag = 0;
						}
					}
				}
			}
			if(flag == 0){
				for(i = 0; i < 6; i++){
					if(arr[row][i] == ch){
						 flag = 1;
						 break;
					}
					else if(arr[i][column] == ch){
						flag = 1;
						break;
					}
					else{
						flag = 0;
					}
				}
			}
			if(flag == 1){
				printf("You cannot input this number here!");
				getch();
			}
			else{
				arr[row][column] = ch;
			}
		break;
		case 2:
			 printf("Thank you for playing");
		break;
		default:
			printf("Wrong Input!");
			getch();
		break;
		}

	}
	getch();
}








