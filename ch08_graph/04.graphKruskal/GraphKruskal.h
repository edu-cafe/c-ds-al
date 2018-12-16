#ifndef __AL_GRAPH_KRUSKAL__
#define __AL_GRAPH_KRUSKAL__

#include "DLinkedList.h"
#include "PriorityQueue.h"

#include "Edge.h"

// ������ �̸����� ���ȭ
enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
	int numV;
	int numE;
	List * adjList;
	int * visitInfo;
	PQueue pqueue;    // ������ ����ġ ���� ����
} Graph;

// �׷����� �ʱ�ȭ
void GraphInit(Graph * pg, int nv);

// �׷����� ���ҽ� ����
void GraphDestroy(Graph * pg);

// ������ �߰�
void AddEdge(Graph * pg, int fromV, int toV, int weight);

// ������ ���� ���
void ShowGraphEdgeInfo(Graph * pg);

// Depth First Search: ������ ���� ���
//void DFShowGraphVertex(Graph * pg, int startV);
int IsConnVertex(Graph * pg, int v1, int v2);   // �� ������ ����Ǿ� �ִ����� �˻���

// ũ�罺Į �ּ� ��� ���� Ʈ���� ����
void ConKruskalMST(Graph * pg);

// ������ ����ġ ���� ���
void ShowGraphEdgeWeightInfo(Graph * pg);

#endif
