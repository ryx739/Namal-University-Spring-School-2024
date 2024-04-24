#include <stdio.h>
#include <omp.h>

#define NUM_THREDS 8

int main(){
    omp_set_num_threads(NUM_THREDS);
    #pragma omp parallel
    printf("Meow ");
    return 0;
}