#include <stdio.h>
#include <stdlib.h>

......... compare(............)
{
	..............
}

void print_table(const int *table, int nelm)
{
	int i;

	for(i=0; i<nelm; i++) {
		printf("%d\n", table[i]);
	}
}

#if 1
int main(void)
{
	int table[10] = {5, 3, 10, 4, 8};
	unsigned int n1=5, n2=n1;
	int item, *ptr;

	item = 9;
	printf("Before lsearch : data count -> %d\n", n1);
	print_table(table, n1);

	ptr = (int *)lsearch(&item, table, &n2, sizeof(int), compare);
	if(n2 > n1) {
		printf("ptr:%p(%d)\n", ptr, *ptr);
		printf("%d is not in table(0~%d), but added.\n", item, n1-1);
	} else {
		printf("%d is in table(0~%d).\n", *ptr, n1-1);
	}
	printf("\nAfter lsearch : data count -> %d\n", n2);
	print_table(table, n2);

	return 0;
}
#else
int main(void)
{
	int table[10] = {5, 3, 10, 4, 8};
	unsigned int n1=5, n2=n1;
	int item, *ptr;

	//item = 7;
	item = 9;
	printf("Before lfind : data count -> %d\n", n1);
	print_table(table, n1);

	ptr = (int *)lfind(&item, table, &n2, sizeof(int), compare);
	if(ptr == NULL) {
		printf("%d is not in table(0~%d).\n", item, n1-1);
	} else {
		printf("%d is in table(0~%d).\n", *ptr, n1-1);
	}
	printf("\nAfter lfind : data count -> %d\n", n2);
	print_table(table, n2);

	return 0;
}
#endif
