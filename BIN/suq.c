#include<stdio.h>

#include<conio.h>

#include<process.h>

typedef struct node

{

int data;

struct node*next;

}node;

void enqueue()

{

int value;

node*temp,*front,*rear=NULL;

printf("Enter the element to be inserted:");

scanf("%d",&value);

temp=(node*)malloc(sizeof(node));

temp->data=value;

temp->next=NULL;

if(front==NULL)

front=rear=temp;

else

{

rear->next=temp;

rear=temp;

}

}

void dequeue()

{

node*front,*temp;

if(front==NULL)

printf("list is empty:");

else

{

temp=front;

front =front->next;

printf("deleted element:%d\n",temp->data);

}

}

void display()

{

node*front,*temp;

if(front==NULL)

printf("Queue is empty:");

else

{

temp=front;

while(temp->next!=NULL)

printf("%d",temp->data);

temp=temp->next;

}

printf("%d",temp->data);

}

void main()

{

int choice;

printf("Queue using linked list:");

printf("1.insert\n 2.delete\n 3.Display\n 4.EXIT");

while(1)

{

printf("Enter your choice:");

scanf("%d",&choice);

switch (choice)

{

case 1:

enqueue();

break;

case 2:

dequeue();

break;

case 3:

display();

break;

case 4:

exit(0);

}

}

}