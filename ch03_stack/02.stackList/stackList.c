#include <stdio.h>
#include <stdlib.h>
#include "stackList.h"

void StackInit(Stack * pstack)
{
	.........
}

int SIsEmpty(Stack * pstack)
{
	if(pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack * pstack, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = ...............

	pstack->head = ............
}

Data SPop(Stack * pstack)
{
	Data rdata;
	Node * rnode;

	if(SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = .............
	free(.........);

	return .........;
}

Data SPeek(Stack * pstack)
{
	if(SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}

	return ..............
}
