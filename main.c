#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r = rand();

    int operation1 = r * 3 - 6 * 2 + 7;
    int operation2 = operation1 * 0 - 9 * 3 + 93277;
    int operation3 = operation2 * 857646569899373 * 32875 - 32789 * 23789 + 32789;
    operation3++;

    int last_val = operation3 * 0 - 9 * 3 + 93277 * 32875 - 32789 * 23789 + 32789;

    printf("%x", last_val);
    return 0;
}

