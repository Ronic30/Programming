//“malloc” or “memory allocation” method is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form

    //int prt = (int*)malloc(100, sizeof(int));

// Since the size of int is 4 bytes,
// this statement will allocate 400 bytes of memory.

// And, the pointer ptr holds the address
// of the first byte in the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *prt = (int*) malloc(sizeof(int));

    if(prt == NULL){
        printf("PRT fail hogayi \n");
        return 1;
    }

    *prt = 52;

    printf("Value Stored in prt : %d", *prt);

    free(prt);

    return 0;
}
