#include <stdio.h>
#include <stdlib.h>


int main() {
    /* char pet[3]; */
    char *pet = malloc(3*sizeof(char));
    pet[0] = 'd';
    pet[1] = 'o';
    pet[2] = 'g';
    printf("%s\n", pet);

}