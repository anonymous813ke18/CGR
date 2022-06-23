#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct link_list
	{
		int sr_no;
		char name;
		char department;
		char subject;
		int salary;
		struct link_list * next;
	}node;
void insertq(node **frontq, node **rearq)
	{
		node *ptr;
		char insert_name, insert_department, insert_subject;
		int insert_sr_no, insert_salary;
		ptr = (node*)malloc(sizeof(node));

		printf("Enter the Serial Number:");
		scanf("%d",&insert_sr_no);
		printf("Enter the Name:");
		scanf("%c",&insert_name);
		scanf("%c",&insert_name);
		printf("Enter the department:");
		scanf("%c",&insert_department);
		scanf("%c",&insert_department);
		printf("Enter the subject:");
		scanf("%c",&insert_subject);
		scanf("%c",&insert_subject);
		printf("Enter the salary:");
		scanf("%d",&insert_salary);

		ptr->sr_no = insert_sr_no;
		ptr->name = insert_name;
		ptr->department = insert_department;
		ptr->subject = insert_subject;
		ptr->salary = insert_salary;
		ptr->next = NULL;

		if(*frontq == NULL)
			*frontq = ptr;
		else
			(*rearq)->next = ptr;

		*rearq=ptr;
		(*rearq)->next = *frontq;
	}

void deleteq(node **frontq, node **rearq)
	{
		node *prev, *loc;
		int delete_sr_no, i;
		loc = *frontq;

		printf("Enter the Serial No. of the row you want to delete:");
		scanf("%d",&delete_sr_no);
		printf("Deleting the row....\n");

		while(loc != NULL)
		    {
			   if(loc->sr_no == delete_sr_no)
			    {
				if(loc == *frontq && loc == *rearq)
					{
						*frontq = NULL;
						*rearq = NULL;
					}
				else if(loc == *frontq)
				    *frontq = (*frontq)->next;
				else
				    prev->next = loc->next;
				free(loc);
				return;
			    }
			    prev = loc;
			    loc = loc->next;
		    }
		printf("Row deleted!\n");
	}

void searchq(node **temp)
	{
		int search_sr_no,k=0;
		printf("Enter the serial no. to be searched:");
		scanf("%d",&search_sr_no);

		while(*temp != NULL)
		    {
			if((*temp)->sr_no == search_sr_no)
			    {
				printf("The row is present!\n");
				printf("Serial No:%d",(*temp)->sr_no);
					printf("\nName:%c",(*temp)->name);
					printf("\nDepartment:%c",(*temp)->department);
					printf("\nSubject:%c",(*temp)->subject);
					printf("\nSalary:%d",(*temp)->salary);
					printf("\n");
					return;
			    }
			*temp = (*temp)->next;
		    }
		printf("Row not found!\n");

	}

void main()
	{
		node *frontq, *rearq, *temp;
		int i,j,search_sr_no;
		clrscr();
		frontq = NULL;
		rearq = NULL;

		while(i != 5)
			{
				printf("1-Insert a row\n");
				printf("2-Delete a row\n");
				printf("3-Search a row\n");
				printf("4-Display the table\n");
				printf("5-Exit\n");
				printf("Enter your choice\n");
				scanf("%d",&i);

				if(i == 1)
					{
						clrscr();
						printf("Inserting a row...\n");
						insertq(&frontq, &rearq);
					}
				else if(i == 2)
					{
						clrscr();
						deleteq(&frontq, &rearq);
					}
				else if(i == 3)
					{
						clrscr();
						searchq(&frontq);
					}
				else if(i == 4)
					{
						clrscr();
						if(frontq == NULL)
							{
								printf("The table is empty\n");
							}
						else
							{
							    printf("Displaying the table...\n");
								printf("Serial No.\tName\tDepartment\tSubject\tSalary\n");
								temp = frontq;
								printf("%d",temp->sr_no);
								printf("\t\t%c",temp->name);
								printf("\t%c",temp->department);
								printf("\t\t%c",temp->subject);
								printf("\t%d\n",temp->salary);
								temp = temp->next;
								while(temp != frontq)
									{
										printf("%d",temp->sr_no);
										printf("\t\t%c",temp->name);
										printf("\t%c",temp->department);
										printf("\t\t%c",temp->subject);
										printf("\t%d\n",temp->salary);
										temp = temp->next;
									}
							}
					}
			}

	}
