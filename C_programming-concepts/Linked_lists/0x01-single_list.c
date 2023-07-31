#include <stdio.h>	//standard input/output header
#include <stdlib.h>	//contains the malloc functions

int data;


struct node
{
	int data;
	struct node *link;
};	//Creates a node thats contains data and a link (pointer) to another node.

int main()
{
	struct node *head = NULL;	//creates a header that points to struct node
	head = (struct node *)malloc(sizeof(struct node));
	/*uses malloc() to allocates size for the struct called node and saves as a pointer
	 * to the to the head*/

	head->data = 45;	//head is accessing and writing the data store in the node
				//the variablae 'data' is given 45
	
	head->link = NULL;	//Using the header to access the link adrress
	
	data = 100;
	printf("%d\n", head->data);
}

