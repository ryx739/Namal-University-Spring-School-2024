#include <stdio.h>
#include <omp.h>

#define NUM_THREDS 8

int main(){

    omp_set_num_threads(NUM_THREDS);
    #pragma omp parallel
        printf("Meow From Thread Num : %d\n", omp_get_thread_num());
    #pragma omp single
        printf("This runs only once and on Thread Num : %d\n", omp_get_thread_num());

    return 0;
}