#include <stdio.h>

int main(){
    #pragma omp parallel
    {
        printf("Meow ");
    }
    return 0;
}
