# Namal-University-Spring-School-2024
Code from 3-day Spring School on programming single-core to multi-core processor-based systems in collaboration with PakSupercomputing and BarcelonaSupercomputing.


## How to Compile

cd into folder with main.c
compile with -fopenmp as follows
gcc main.c -fopenmp

it will make a.exe for windows, a.out for linux


for custom out file name
gcc main.c -fopenmp -o filename.exe
gcc main.c -fopenmp -o filename.out