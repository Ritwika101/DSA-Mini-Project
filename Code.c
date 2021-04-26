#include <stdio.h>
#include <stdlib.h>

struct node	
{
	int info, prn;
	struct node *next;
} *front = NULL, *rear = NULL;

void enqueue(int item, int pr)		//function to insert an element
{
	struct node *p, *temp = (struct node *)malloc(sizeof(struct node));	//creating node to be inserted
	temp -> info = item;
	temp -> prn = pr;
	temp -> next = NULL;
	if(rear == NULL)	//creating the first node
	{
		front = temp;
		rear = temp;
	}
	else
	{
		p = front;
		if((p -> prn) > (temp -> prn))		//inserting the node at front
		{
			temp -> next = front;
			front = temp;
			return;
		}
			
		while(((p -> next) != NULL) && ((p -> next -> prn) <= (temp -> prn)))
			p = p -> next;		//finding out the position where the node is to inserted
			
		if((p -> next) == NULL)		//inserting the node at rear
		{
			p -> next = temp;
			rear = p -> next;
		}
		else	//inserting the node in between other nodes
		{
			temp -> next = p -> next;
			p -> next = temp;
		}
	}
}

void display()		//function to display the elements
{
	printf("Priority Queue: ");
	struct node *p = front;
	if(p==NULL)		//underflow condition
	{
		printf("Queue is empty.\n");
		return;
	}
	while(p!=NULL)		//displaying elements
	{
		printf("%d ", p -> info);
		p = p -> next;
	}
	printf("\n");
}

void main()
{
	int n, val, p, ch;
	printf("1. Create\n2. Display\n3. Exit\n");
	while(1)
	{
		printf("\nEnter choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");		//inserting an element
				scanf("%d", &val);
				printf("Enter its priority: ");
				scanf("%d", &p);
				if(p<1)		//checking for invalid priority
				{
					printf("Priority should be greater than or equal to 1.\n");
					break;
				}
				enqueue(val, p);
				break;
			case 2:	display();	//displaying elements
				break;
			case 3: return;		//terminating the program
		}
	}
} 

