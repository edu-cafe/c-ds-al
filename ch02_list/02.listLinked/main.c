#include <stdio.h>
#include <stdlib.h>

// Node struct ����
.........

int main(void)
{
	Node * head = NULL;    // NULL ������ �ʱ�ȭ
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	/**** �����͸� �Է� �޴� ���� ****/
	while(1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if(readData < 1) break;

		/*** ����� �߰����� ***/
		.......
		
		
	}
	printf("\n");

	/**** �Է� ���� �������� ��°��� ****/
	printf("�Է� ���� �������� ��ü���! \n");
	if(head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		cur = head;
		printf("--->%d  ", cur->data);   // ù ��° ������ ���
		
		// �� ��° ������ ������ ���
		.......
		
	}
	printf("\n\n");

	/**** �޸��� �������� ****/
	if(head == NULL)
	{
		return 0;    // ������ ��尡 �������� �ʴ´�.
	}
	else
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("--->%d��(��) �����մϴ�. \n", head->data);
		free(delNode);    // ù ��° ����� ����

		// �� ��° ������ ��� ���� ���� �ݺ���
		.......
		
	}

	return 0;
}
