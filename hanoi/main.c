#include <stdio.h>
#include <stdlib.h>

void HanoiT(int num, char from, char to, char by)
{
    if(num == 1) {
        printf("원반_%d(%c) --> %c\n", num, from, to);
    } else {
        HanoiT(num-1, from, by, to);
        printf("원반_%d(%c) --> %c\n", num, from, to);
        HanoiT(num-1, by, to, from);
    }
}

int main()
{
    HanoiT(3, 'A', 'C', 'B');
    printf("------------------------------------\n");

    HanoiT(4, 'A', 'C', 'B');
    printf("------------------------------------\n");

    HanoiT(5, 'A', 'C', 'B');

    return 0;
}
