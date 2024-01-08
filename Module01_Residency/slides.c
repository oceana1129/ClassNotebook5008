/**
 * 
 * Code used in the residency slides
 *
*/


#include <stdio.h>
#include <stdlib.h>


int if_example(int val, int val2) {
    if(val-val2 > 0) { // more common
        return 1;
    }
    else if(val-val2 < 0) return -1; // single line is allowed
    // else implied 
    return 0;
}

void run_if_example() {
    for(int i = 0; i < 10; i++) {
        int val = rand() % 10;
        int val2 = rand() %10;
        printf("Val: %d, val2: %d, result %d\n", val, val2, if_example(val, val2));
    }
}

void memory_example() {
    int x = 5;
    double y = 3.14;

    int * p = malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;

    free(p);
}

int main() {
    memory_example();
    run_if_example();   
    return 0;
}