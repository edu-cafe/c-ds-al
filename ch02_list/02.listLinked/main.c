#include <stdio.h>
#include <stdlib.h>

// Node struct 정의
.........

int main(void)
{
	Node * head = NULL;    // NULL 포인터 초기화
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	/**** 데이터를 입력 받는 과정 ****/
	while(1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if(readData < 1) break;

		/*** 노드의 추가과정 ***/
		.......
		
		
	}
	printf("\n");

	/**** 입력 받은 데이터의 출력과정 ****/
	printf("입력 받은 데이터의 전체출력! \n");
	if(head == NULL)
	{
		printf("저장된 자연수가 존재하지 않습니다. \n");
	}
	else
	{
		cur = head;
		printf("--->%d  ", cur->data);   // 첫 번째 데이터 출력
		
		// 두 번째 이후의 데이터 출력
		.......
		
	}
	printf("\n\n");

	/**** 메모리의 해제과정 ****/
	if(head == NULL)
	{
		return 0;    // 해제할 노드가 존재하지 않는다.
	}
	else
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("--->%d을(를) 삭제합니다. \n", head->data);
		free(delNode);    // 첫 번째 노드의 삭제

		// 두 번째 이후의 노드 삭제 위한 반복문
		.......
		
	}

	return 0;
}
