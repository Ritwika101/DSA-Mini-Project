# DSA-Mini-Project
Design a program to create and display a priority queue using a linked list.
<br>
Program Time and Space Complexity<br>
Time complexity for function enqueue() - O(n)<br>
Time complexity for function display() - O(n)<br>

Pseudo Code <br>
void enqueue (int item, int pr)<br>
	&nbsp;&nbsp;&nbsp;struct node *p<br>
	&nbsp;&nbsp;&nbsp;struct node *temp <-(struct node *)malloc(sizeof(struct node))<br>
	&nbsp;&nbsp;&nbsp;temp -> info <- item<br>
	&nbsp;&nbsp;&nbsp;temp -> prn  <- prior<br>
	&nbsp;&nbsp;&nbsp;temp -> next  <- NULL<br>
	&nbsp;&nbsp;&nbsp;IF rear == NULL  THEN<br>
		&nbsp;&nbsp;&nbsp;&nbsp;front <- temp<br>
		&nbsp;&nbsp;&nbsp;&nbsp;rear <- temp <br>
	&nbsp;&nbsp;&nbsp;ELSE<br>
		&nbsp;&nbsp;&nbsp;&nbsp;p <- front<br>
		&nbsp;&nbsp;&nbsp;&nbsp;IF (p -> prn) > (temp -> prn)  THEN<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;temp -> next  <-  front<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;front <- temp<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return<br>
		&nbsp;&nbsp;&nbsp;&nbsp;END IF<br>
		&nbsp;&nbsp;&nbsp;&nbsp;WHILE ((p -> next) !=  NULL) and (p -> next -> prn) <= (temp -> prn)  do<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;p <- p->next<br>
		&nbsp;&nbsp;&nbsp;&nbsp;END WHILE<br>
		&nbsp;&nbsp;&nbsp;&nbsp;IF (p -> next) == NULL  THEN<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;p -> next  <- temp<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;rear <- p->next<br>
		&nbsp;&nbsp;&nbsp;&nbsp;ELSE<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;temp -> next <- p -> next<br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;p -> next <- temp<br>
&nbsp;&nbsp;&nbsp;&nbsp;END IF<br>
&nbsp;&nbsp;&nbsp;END IF<br>
END<br>

void display( )<br>
&nbsp;&nbsp;&nbsp;DISPLAY (“Priority Queue”)<br>
	&nbsp;&nbsp;&nbsp;&nbsp;struct node *p <- front<br>
	&nbsp;&nbsp;&nbsp;&nbsp;IF p == NULL  THEN<br>
		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;DISPLAY (“Queue is empty.\n”)<br>
		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return<br>
	&nbsp;&nbsp;&nbsp;&nbsp;END IF<br>
	&nbsp;&nbsp;&nbsp;&nbsp;WHILE p != NULL  do<br>
		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;DISPLAY (p -> info)<br>
		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;p  <- p->next<br>
	&nbsp;&nbsp;&nbsp;&nbsp;END WHILE<br>
	&nbsp;&nbsp;&nbsp;&nbsp;DISPLAY (“\n”)<br>
END

