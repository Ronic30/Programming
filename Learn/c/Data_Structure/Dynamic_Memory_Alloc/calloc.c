//“calloc” or “contiguous allocation” method is used to dynamically allocate the specified number of blocks of memory of the specified type. 
// It initializes each block with a default value ‘0’.

    // int *prt = (*float) calloc(25, sizeof(float));

// This statement allocates contiguous space memory for 25 elements each with the size of float

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *prt = (float*) calloc(25, sizeof(float));
    if(prt == NULL){
        printf("Program is Failed");
        return 1;
    }

    *prt = 10;

    printf("prt valued : %f", *prt);

    return 0;
}


