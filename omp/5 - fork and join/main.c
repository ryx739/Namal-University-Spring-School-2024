#include <stdio.h>
#include <omp.h>

#define NUM_THREDS 8

int main(){
    
    printf("Maximum Threads : %d\n", omp_get_max_threads());
    printf("Number of processors : %d\n", omp_get_num_procs());
    printf("Number of threads Before Fork : %d\n", omp_get_num_threads());

    //setting number of threads
    omp_set_num_threads(NUM_THREDS);
    printf("Not forked yet ... Number of threads is  : %d\n", omp_get_num_threads());

    //parallel section begins
    #pragma omp parallel
    {
        #pragma omp single
        printf("Number of threads After Fork : %d\n", omp_get_num_threads());
    }

    printf("Number of threads After Join : %d\n", omp_get_num_threads());

    return 0;
}
