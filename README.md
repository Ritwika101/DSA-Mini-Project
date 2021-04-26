# DSA-Mini-Project
Design a program to create and display a priority queue using a linked list.
<br>
Program Time and Space Complexity<br>
Time complexity for function enqueue() - O(n)<br>
Time complexity for function display() - O(n)<br>

Pseudo Code <br>
void enqueue (int item, int pr)<br>
	struct node *p<br>
	struct node *temp <-(struct node *)malloc(sizeof(struct node))<br>
	temp -> info <- item<br>
	temp -> prn  <- prior<br>
	temp -> next  <- NULL<br>
	IF rear == NULL  THEN<br>
		front <- temp<br>
		rear <- temp <br>
	ELSE<br>
		p <- front<br>
		IF (p -> prn) > (temp -> prn)  THEN<br>
			temp -> next  <-  front<br>
			front <- temp<br>
			return<br>
		END IF<br>
		WHILE ((p -> next) !=  NULL) and (p -> next -> prn) <= (temp -> prn)  do<br>
			p <- p->next<br>
		END WHILE<br>
		IF (p -> next) == NULL  THEN<br>
			p -> next  <- temp<br>
			rear <- p->next<br>
		ELSE<br>
			temp -> next <- p -> next<br>
			p -> next <- temp<br>
END IF<br>
END IF<br>
END<br>

void display( )<br>
DISPLAY (“Priority Queue”)<br>
	struct node *p <- front<br>
	IF p == NULL  THEN<br>
		DISPLAY (“Queue is empty.\n”)<br>
		return<br>
	END IF<br>
	WHILE p != NULL  do<br>
		DISPLAY (p -> info)<br>
		p  <- p->next<br>
	END WHILE<br>
	DISPLAY (“\n”)<br>
END

