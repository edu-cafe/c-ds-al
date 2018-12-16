#include <stdio.h>
#include "DLinkedList.h"

int compData(int d1, int d2)
{
#if 1
    return (d1 - d2);
#else
    if(d1 == d2) reurn 0;           // d1�� d2�� ����.
	else if(d1 < d2) return -1;    // d1�� ���� ������ �ռ���.
	else if(d1 == d2) return 1;    // d2�� ���� ������ �ռ���.
#endif
}

int main(void)
{
	// List�� ���� �� �ʱ�ȭ  ////////////
	List list;
	int data;
	ListInit(&list);

	SetSortRule(&list, compData);

	// 7���� ������ ����  ///////////////
	LInsert(&list, 55);  LInsert(&list, 11);
	LInsert(&list, 33);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 77);
	LInsert(&list, 22);

	// ����� �������� ��ü ��� ////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	// ���� 22�� �˻��Ͽ� ��� ���� ////////////
	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);

		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	// ���� �� ����� ������ ��ü ��� ////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}
