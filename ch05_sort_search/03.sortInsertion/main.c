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
		.........   // ���� ����� insData�� ����

		for(j=i-1; j>=0 ; j--)
		{
			if(arr[j] > ....... )
				.........    // �� ��� �� ĭ �ڷ� �б�
			else
				break;   // ���� ��ġ ã������ Ż��!
		}

		.........  // ã�� ��ġ�� ���� ��� ����!
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
