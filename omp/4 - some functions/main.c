#include <stdio.h>
#include <omp.h>

#define NUM_THREDS 8

int main(){

    omp_set_num_threads(NUM_THREDS);
    printf("Maximum Threads : %d\n", omp_get_max_threads());
    printf("Number of processors : %d\n", omp_get_num_procs());

    #pragma omp parallel
    {
        printf("Meow From Thread Num : %d\n", omp_get_thread_num());

        #pragma omp single
        printf("Number of threads Now : %d\n", omp_get_num_threads());

    }
    return 0;
}
