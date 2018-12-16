#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int compData(int d1, int d2)
{
    return (d1 - d2);
}

// �׷����� �ʱ�ȭ
void GraphInit(Graph * pg, int nv)
{
	int i;

	pg->adjList = .........
	pg->numV = ....;
	pg->numE = ...;     // �ʱ��� ���� ���� 0��

	for(i=0; i<nv; i++)
	{
		......(&(pg->adjList[i]));
		........(&(pg->adjList[i]), compData);
	}
}

// �׷��� ���ҽ��� ����
void GraphDestroy(Graph * pg)
{
	if(pg->adjList != NULL)
		free(pg->adjList);
}

// ������ �߰�
void AddEdge(Graph * pg, int fromV, int toV)
{
	LInsert(&(pg->adjList[fromV]), ....);
	LInsert(&(pg->adjList[toV]), .....);
	pg->numE += 1;
}

// ��ƿ��Ƽ �Լ�: ������ ���� ���
void ShowGraphEdgeInfo(Graph * pg)
{
	int i;
	int vx;

	for(i=0; i<pg->numV; i++)
	{
		printf("%c�� ����� ����: ", i + 'A');

		if(LFirst(&(pg->adjList[i]), &vx))
		{
			printf("%c ", vx + 'A');

			while(LNext(&(pg->adjList[i]), &vx))
				printf("%c ", vx + 'A');
		}
		printf("\n");
	}
}
