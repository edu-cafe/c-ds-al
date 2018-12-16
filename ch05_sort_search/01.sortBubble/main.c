#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *base, int nelem);

void DataPrint(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
	int score[] = {78, 23, 86, 33, 98, 42};
	int i;

	printf("Before Sort....\n");
	DataPrint(score, sizeof(score)/sizeof(int));

	BubbleSort(score, sizeof(score)/sizeof(int));

	printf("\n\nAfter Sort....\n");
	DataPrint(score, sizeof(score)/sizeof(int));

	return 0;
}
