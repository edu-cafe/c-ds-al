#include <stdio.h>
#include <stdlib.h>

void DataPrint(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void SelectionSort(int arr[], int n)
{
	int i, j;
	int minIdx;
	int temp;

	for(i=0; i<n-1; i++)
	{
		........    // ���� ������ ���� �ռ��� �������� index

		for(j=i+1; j<n; j++)   // �ּҰ� Ž��
		{
			........
			
		}

		/* ��ȯ */
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}
}

int main(void)
{
	int arr[4] = {3, 4, 2, 1};
	int i;

	printf("Before Sort....\n");
	DataPrint(arr, sizeof(arr)/sizeof(int));

	SelectionSort(arr, sizeof(arr)/sizeof(int));

	printf("\n\nAfter Sort....\n");
	DataPrint(arr, sizeof(arr)/sizeof(int));
	return 0;
}
