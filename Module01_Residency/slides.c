/**
 * 
 * Code used in the residency slides
 *
*/


#include <stdio.h>
#include <stdlib.h>

void memory_example() {
    int *p = malloc(sizeof(int));
    *p = 5;
    printf("p = %p, *p = %d\n", p, *p);
    free(p);
}

void memory_stack_example() {
    int x = 5;
    double y = 3.14;

    int * p = malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;

    free(p);
}

int main() {
    memory_example();
    return 0;
}