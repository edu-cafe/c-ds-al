#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GraphDFS.h"
#include "stackArray.h"

int compData(int d1, int d2)
{
    return (d1 - d2);
}

// �׷����� �ʱ�ȭ
void GraphInit(Graph * pg, int nv)
{
	int i;

	pg->adjList = (List*)malloc(sizeof(List)*nv);
	pg->numV = nv;
	pg->numE = 0;     // �ʱ��� ���� ���� 0��

	for(i=0; i<nv; i++)
	{
		ListInit(&(pg->adjList[i]));
		SetSortRule(&(pg->adjList[i]), compData);
	}

	// Ž�� ���� ����� ���� ������ �Ҵ� �� �ʱ�ȭ
	pg->.......= (int *)malloc(sizeof(int) * pg->numV);
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}

// �׷��� ���ҽ��� ����
void GraphDestroy(Graph * pg)
{
	if(pg->adjList != NULL)
		free(pg->adjList);

    if(pg->visitInfo != NULL)
		free(pg->visitInfo);
}

// ������ �߰�
void AddEdge(Graph * pg, int fromV, int toV)
{
	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
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

int VisitVertex(Graph * pg, int visitV)
{
	if(pg->visitInfo[visitV] == 0)
	{
		pg->visitInfo[visitV] = 1;
		printf("%c ", visitV + 'A');     // �湮 ���� ���
		return TRUE;
	}

	return FALSE;
}

// Depth First Search: ������ ���� ���
void DFShowGraphVertex(Graph * pg, int startV)
{
	Stack stack;
	int visitV = startV;
	int nextV;

	// DFS�� ���� ������ �ʱ�ȭ
	........(&stack);

	.......(pg, visitV);    // ���� ���� �湮
	.......(&stack, visitV);

	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
	{
		int visitFlag = FALSE;

		if(VisitVertex(pg, nextV) == TRUE)  //�湮�õ� & �湮�� �����ϸ�
		{
			......(&stack, visitV);
			visitV = nextV;
			visitFlag = TRUE;
		}
		else    //�湮�õ� & �̹� �湮�Ѱ�
		{
			while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE)
			{
				if(VisitVertex(pg, nextV) == TRUE)
				{
					.....(&stack, visitV);
					visitV = nextV;
					visitFlag = TRUE;
					break;
				}
			}
		}

		if(visitFlag == FALSE)  //����� �������� �湮�� ��� �Ϸ�Ǹ�
		{
			if(SIsEmpty(&stack) == TRUE)    // ������ ��� DFS����
				break;
			else
				visitV = ......(&stack);  //�ǵ��ư�
		}
	}

	// Ž�� ���� �ʱ�ȭ
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}
