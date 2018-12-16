#include <stdio.h>
#include <stdlib.h>
#include "ListQueue.h"

void QueueInit(Queue * pq)
{
	..............
}

int QIsEmpty(Queue * pq)
{
	if(.............)
		return TRUE;
	else
		return FALSE;
}

void Enqueue(Queue * pq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = .......

	if(QIsEmpty(pq))
	{
		pq->front = newNode;
		pq->rear = newNode;
	}
	else
	{
		...........
	}
}

Data Dequeue(Queue * pq)
{
	Node * delNode;
	Data retData;

	if(QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	delNode = pq->front;
	retData = delNode->data;
	..............

	free(delNode);
	return retData;
}

Data QPeek(Queue * pq)
{
	if(QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	return ...........
}
