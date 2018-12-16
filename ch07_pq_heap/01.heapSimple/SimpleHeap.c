#include "SimpleHeap.h"

void HeapInit(Heap * ph)
{
	.........
}

int HIsEmpty(Heap * ph)
{
	if(.........)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx) 
{ 
	return idx/2; 
}

int GetLChildIDX(int idx) 
{ 
	return ....... 
}

int GetRChildIDX(int idx) 
{ 
	return ........ 
}

int GetHiPriChildIDX(Heap * ph, int idx)
{
	if(GetLChildIDX(idx) > ph->numOfData)    // �ڽ� ��尡 ���ٸ�
		return 0;

	else if(GetLChildIDX(idx) == ph->numOfData)    // ���� �ڽ� ��尡 ������ �����
		return GetLChildIDX(idx);

	else   // ���� �ڽ� ���� ������ �ڽ� ����� �켱������ ��
	{
		if(...............)
			return GetRChildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}

void HInsert(Heap * ph, HData data, Priority pr)
{
	int idx = ph->numOfData+1;
	HeapElem nelem = {pr, data}; 

	while(idx != 1)
	{
		if(.............)
		{
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
			break;
	}
	
	ph->heapArr[idx] = nelem;
	ph->numOfData += 1;
}

HData HDelete(Heap * ph)
{
	HData retData = (ph->heapArr[1]).data;    // ������ ������ �ӽ� ����
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;    // ��Ʈ ����� Index
	int childIdx;

	while(childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if(...................)
			break;

		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}

	ph->heapArr[parentIdx] = .........;
	ph->numOfData -= 1;
	return retData;
}