#include <stdio.h>
#include <stdlib.h>

void DataPrint(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void InsertionSort(int arr[], int n)
{
	int i, j;
	int insData;

	for(i=1; i<n; i++)
	{
		.........   // 정렬 대상을 insData에 저장

		for(j=i-1; j>=0 ; j--)
		{
			if(arr[j] > ....... )
				.........    // 비교 대상 한 칸 뒤로 밀기
			else
				break;   // 삽입 위치 찾았으니 탈출!
		}

		.........  // 찾은 위치에 정렬 대상 삽입!
	}
}


int main(void)
{
	int arr[5] = {5, 3, 2, 4, 1};
	int i;

	printf("Before Sort....\n");
	DataPrint(arr, sizeof(arr)/sizeof(int));

	InsertionSort(arr, sizeof(arr)/sizeof(int));

	printf("\n\nAfter Sort....\n");
	DataPrint(arr, sizeof(arr)/sizeof(int));

	return 0;
}
