// Multidimensional Arrays ;

#include <stdio.h>

int main(){
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    printf("%d\n", arr[0][2]);
    printf("%d", arr[1][0]);

    return 0;
}

//
#include <stdio.h>
int main(){
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    arr[0][2] = 9;
    arr[1][0] = 16;

    printf("%d\n", arr[0][2]);
    printf("%d", arr[1][0]);

    return 0;
}

//
#include <stdio.h>
int main(){
    int arr[2][3] = {{10,20,30}, {50,60,70}};

    for( int i=0; i<2; ++i){
        for( int j = 0; j < 3; ++j){
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}