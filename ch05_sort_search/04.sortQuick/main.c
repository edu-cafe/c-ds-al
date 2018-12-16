#include <stdio.h>
#include <stdlib.h>

void DataPrint(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void Swap(int *d1, int *d2)
{
	int t = *d1;
	*d1 = *d2;
	*d2 = t;
}

int sort_cnt=0;
void QuickSort(int *base, int nelem)
{
	int p;
	int l, h;

	sort_cnt++;
	if(nelem <= 1) return;

	p = *(base);
	l = 0;
	h = nelem;
	while(1)
	{
		while(*(base + ++l) < p);
		while(*(base + --h) > p);
		if(l >= h) break;
		Swap(base+l, base+h);
	}
	Swap(base, base+h);
	QuickSort(base, h);
	QuickSort(base+h+1, nelem-h-1);
}

int main(void)
{
    int score[] = {100, 78, 5, 23, 86, 33, 98, 42, 5, 40, 22};
    //int score[] = {33, 78, 5, 23, 86, 100, 98, 42, 5, 40, 22};
    //int score[] = {3, 2, 4, 1, 7, 6, 5};
    //int score[] = {3, 3, 3};

	printf("Before Sort....\n");
	DataPrint(score, sizeof(score)/sizeof(int));

	QuickSort(score, sizeof(score)/sizeof(int));

	printf("\n\nAfter Sort....\n");
	DataPrint(score, sizeof(score)/sizeof(int));
	printf("\n\nsort_cnt : %d\n", sort_cnt);

	return 0;
}
