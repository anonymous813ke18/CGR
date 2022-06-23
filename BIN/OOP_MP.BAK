#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
class Student
{
	public:
		long int reg;
		char name[80],branch[50];
		void input()
		{
			cout<<"\n Enter name: ";
			cin>>name;
			cout<<"\n Enter roll no: ";
			cin>>reg;
			cout<<"\n Enter Branch: ";
			cin>>branch;
		}
		void display()
		{
			cout<<name;
			cout<<"\t"<<reg;
			cout<<"\t"<<branch;
			cout<<"\n";
		}
		void edit()
{
			cout<<"\n Enter new name: ";
			cin>>name;
			cout<<"\n Enter new roll no: ";
			cin>>reg;
			cout<<"\n Enter new Branch: ";
			cin>>branch;

}

};
class Teacher
{
	public:
		long int salary;
		char name[80],branch[50];
		void input()
		{
			cout<<"\n Enter name: ";
			cin>>name;
			cout<<"\n Enter branch: ";
			cin>>branch;
			cout<<"\n Enter salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<name;
			cout<<"\t"<<branch;
			cout<<"\t"<<salary;
			cout<<"\n";
		}
		void edit()
{
			cout<<"\n Enter new name: ";
			cin>>name;
			cout<<"\n Enter new branch: ";
			cin>>branch;
			cout<<"\n Enter new salary: ";
			cin>>salary;

}

};

void main()
{
	Student obj_s[100];
	Teacher obj_t[100];
	int i=1, j=0, k=0, counter, choice = 1, e_reg, s_reg, flag;
	clrscr();
	while(choice != 3)
	{
	choice = 1;
	flag = 1;
	cout<<"\t\t\t-----------------------------------------\n";
	cout<<"\t\t\t  College Management System\n";
	cout<<"\t\t\t-----------------------------------------\n";
	cout<<"\n\t\t\tEnter <1> for Student Management"
	    <<"\n\t\t\tEnter <2> for Teacher Management"
	    <<"\n\t\t\tEnter <3> to Exit";
	cin>>choice;

	switch(choice)
	{
	case 1:
	while(flag != 0)
	{
		cout<<"\t\t\t-----------------------------------------\n";
		cout<<"\t\t\t  College Management System\n";
		cout<<"\t\t\t-----------------------------------------\n";
		cout<<"\n\t\t\tEnter <1> to Add new student"
			<<"\n\t\t\tEnter <2> to Display all student"
			<<"\n\t\t\tEnter <3> to Edit student"
			<<"\n\t\t\tEnter <4> to Search student"
			<<"\n\t\t\tEnter <0> to Exit\n";
		cout<<"\n\n\t\t\tEnter Your Choice:";
		cin>>i;
		switch(i)
		{
			case 1 :
				clrscr();
				obj_s[j].input();
				j++;
			break;
			case 2 :
				clrscr();
				cout<<"Reg No.\tName\tRoll No.\tBranch\n";
				for(counter = 0; counter < j; counter++)
					{
						cout<<counter+1<<"\t";
						obj_s[counter].display();
					}
			break;
			case 3 :
				clrscr();
				cout<<"Enter the registration no. of the student you want to edit:";
				cin>>e_reg;
				if(e_reg > j)
					{
						cout<<"Invalid Registration No.";
					}
				else
					obj_s[e_reg-1].edit();
			break;
			case 4 :
				clrscr();
				cout<<"Enter the registration no. of the student you want to search:";
				cin>>s_reg;
				if(s_reg > j)
					{
						cout<<"Invalid Registration No.!";
					}
				else
					obj_s[s_reg-1].display();
			break;
			case 0 :
			flag = 0;
			clrscr();
			break;
			default :
				cout<<"\nWRONG CHOICE!!!\nTRY AGAIN";
			break;
		}
	}
	break;

	case 2:
	while(flag != 0)
	{
		cout<<"\t\t\t-----------------------------------------\n";
		cout<<"\t\t\t  College Management System\n";
		cout<<"\t\t\t-----------------------------------------\n";
		cout<<"\n\t\t\tEnter <1> to Add new teacher"
			<<"\n\t\t\tEnter <2> to Display all teachers"
			<<"\n\t\t\tEnter <3> to Edit teacher"
			<<"\n\t\t\tEnter <4> to Search teacher"
			<<"\n\t\t\tEnter <0> to Exit\n";
		cout<<"\n\n\t\t\tEnter Your Choice:";
		cin>>i;
		switch(i)
		{
			case 1 :
				clrscr();
				obj_t[j].input();
				k++;
			break;
			case 2 :
				clrscr();
				cout<<"Reg No.\tName\tBranch\tSalary\n";
				for(counter = 0; counter < k; counter++)
					{
						cout<<counter+1<<"\t";
						obj_t[counter].display();
					}
			break;
			case 3 :
				clrscr();
				cout<<"Enter the registration no. of the student you want to edit:";
				cin>>e_reg;
				if(e_reg > k)
					{
						cout<<"Invalid Registration No.";
					}
				else
					obj_t[e_reg-1].edit();
			break;
			case 4 :
				clrscr();
				cout<<"Enter the registration no. of the student you want to search:";
				cin>>s_reg;
				if(s_reg > k)
					{
						cout<<"Invalid Registration No.!";
					}
				else
					obj_t[s_reg-1].display();
			break;
			case 0 :
			flag = 0;
			clrscr();
			break;
			default :
				cout<<"\nWRONG CHOICE!!!\nTRY AGAIN";
			break;
		}
	}
	break;
	case 3:
	exit(0);
	break;
	default:
	cout<<"Wrong Choice!\n";
	break;
	}
	}
	getch();
}

