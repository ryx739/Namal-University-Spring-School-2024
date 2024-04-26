# Namal-University-Spring-School-2024
Code from 3-day Spring School on programming single-core to multi-core processor-based systems in collaboration with PakSupercomputing and BarcelonaSupercomputing.

## How to Compile

cd into folder with main.c   
compile with -fopenmp as follows   
```gcc main.c -fopenmp```   

it will make a.exe for windows, a.out for linux   

for custom out file name   
```gcc main.c -fopenmp -o filename.exe```   
```gcc main.c -fopenmp -o filename.out```   


## omp
OpenMP is a library for parallel programming in the SMP (symmetric multi-processors, or shared-memory processors) model. When programming with OpenMP, all threads share memory and data. OpenMP supports C, C++ and Fortran.

## master thread
There is one thread that runs from the beginning to the end, and it's called the master thread.

## slave threads
The parallel sections of the program will cause additional threads to fork. These are called the slave threads.

## omp.h
The OpenMP functions are included in a header file called omp.h, so don't forget to include omp.h in your c file to use omp functions   
```#include <omp.h>```   
