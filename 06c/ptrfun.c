#include <stdlib.h>
#include <stdio.h>
int main() {

    // array of size 3
    int *c = malloc(3 * sizeof(int));
    for (int j=0; j < 3; j++) {
        c[j] = j;
    }

    int x = 9;
    printf("%i\n", c[x]);
}
