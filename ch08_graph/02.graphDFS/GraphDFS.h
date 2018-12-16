#ifndef __AL_GRAPH__
#define __AL_GRAPH__

#include "DLinkedList.h"

// ������ �̸����� ���ȭ
enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
	int numV;   // ������ ��
	int numE;   // ������ ��
	List * adjList;   // ������ ����
	int * visitInfo;
} Graph;

// �׷����� �ʱ�ȭ
void GraphInit(Graph * pg, int nv);

// �׷����� ���ҽ� ����
void GraphDestroy(Graph * pg);

// ������ �߰�
void AddEdge(Graph * pg, int fromV, int toV);

// ��ƿ��Ƽ �Լ�: ������ ���� ���
void ShowGraphEdgeInfo(Graph * pg);


// Depth First Search: ������ ���� ���
void DFShowGraphVertex(Graph * pg, int startV);

#endif
