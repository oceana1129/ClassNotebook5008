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

int loop_example(int counter) {
    int rtn = 0;
    // for loops are based on index
    for(int i = 0; i < counter; i++) {
        rtn += i + 1;
    }
    // this is the equivalent while loop
    int j = 0;
    while(j < counter) {
        rtn += j + 1;
        j++; // don't forget the increment, this is equivalent to j += 1;
    }
    return rtn;
}

void run_if_example() {
    for(int i = 0; i < 10; i++) {
        int val = rand() % 10;
        int val2 = rand() %10;
        printf("Val: %d, val2: %d, result %d\n", val, val2, if_example(val, val2));
    }
}

void run_loop_example() {
    printf("Final value is: %d\n", loop_example(10));
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
    run_loop_example();
    return 0;
}