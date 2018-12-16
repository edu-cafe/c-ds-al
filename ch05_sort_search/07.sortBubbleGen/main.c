#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*FCMP)(void *, void *);
#define	BASE(i)	((char *)base + (i)*size)
#define	NAME_SIZE	20

void BubbleSort(.............);
...............

int Swap(void *dest, void *src, int size)
{
	void * t;

	if((t = malloc(size)) == NULL) return -1;
	memcpy(t, dest, size);
	memcpy(dest, src, size);
	memcpy(src, t, size);
	free(t);
}

int main()
{
	int score[] = {78, 23, 86, 33, 98, 42};
    char name[][NAME_SIZE] = {"yang", "lee", "kim", "park", "kang"};
	int i;

	printf("Before Sort....\n");
	for(i=0; i<sizeof(score)/sizeof(int); i++)
		printf("%d ", score[i]);
	printf("\n\n");

	BubbleSort(score, sizeof(score)/sizeof(int), sizeof(int), ........);

	printf("After Sort....\n");
	for(i=0; i<(sizeof(score)/sizeof(int)); i++)
		printf("%d ", score[i]);
	printf("\n\n");

    printf("============================================\n");
	printf("Before Sort....\n");
	for(i=0; i<sizeof(name)/NAME_SIZE; i++)
		printf("%s ", name[i]);
	printf("\n\n");

	BubbleSort(name, sizeof(name)/NAME_SIZE, NAME_SIZE, .........);

	printf("After Sort....\n");
	for(i=0; i<sizeof(name)/NAME_SIZE; i++)
		printf("%s ", name[i]);
	printf("\n\n");

	return 0;
}

void BubbleSort(void *base, int nelem, int size, ..........)
{
	int step, cmp, change;
    int rst;

	for(step=1; step<=nelem-1; step++) {
      change = 0;
      for(cmp = 0; cmp<nelem-step; cmp++) {
		if(..............) > 0) {
			Swap(.................);
            change = 1;
		}
	  }
	  if(change == 0) break;
    }
}

