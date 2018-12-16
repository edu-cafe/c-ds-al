#include <stdio.h>
#include <stdlib.h>

int BSearch(int data[], int cnt, int key)
{
	int l = 0;
	int h = cnt-1;
	int m;

	...........
	
	
	return -1;
}

int main()
{
	int data[] = {1, 2, 4, 6, 7, 9, 11, 12};
	int key;
	int idx;

	while(1) {
		printf("\ninput key(quit:0) --> ");
		scanf("%d", &key);
		if(key == 0) break;
		idx = BSearch(data, sizeof(data)/sizeof(int), key);
		if(idx == -1) printf("no data(%d)!!\n", key);
		else printf("found data(%d) : idx:%d\n", key, idx);
	}
	return 0;
}
