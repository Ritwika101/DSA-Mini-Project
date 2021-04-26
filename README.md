# DSA-Mini-Project
Design a program to create and display a priority queue using a linked list.
1. Problem Solution Approach
void enqueue (int item, int pr)
	struct node *p
	struct node *temp        (struct node *)malloc(sizeof(struct node))
	temp -> info        item
	temp -> prn         prior
	temp -> next         NULL
	IF rear == NULL  THEN
		front        temp
		rear        temp 
	ELSE
		p        front
		IF (p -> prn) > (temp -> prn)  THEN
			temp -> next        front
			front        temp
			return
		END IF
		WHILE ((p -> next) !=  NULL) and (p -> next -> prn) <= (temp -> prn)  do
			p        p->next
		END WHILE
		IF (p -> next) == NULL  THEN
			p -> next        temp
			rear        p->next
		ELSE
			temp -> next         p -> next
			p -> next        temp
    END IF
  END IF
END

void display( )
DISPLAY (“Priority Queue”)
	struct node *p        front
	IF p == NULL  THEN
		DISPLAY (“Queue is empty.\n”)
		return
	END IF
	WHILE p != NULL  do
		DISPLAY (p -> info)
		p        p->next
	END WHILE
	DISPLAY (“\n”)
END


2. Time and Space Complexity
Time complexity for function enqueue() - O(n)
Time complexity for function display() - O(n)
