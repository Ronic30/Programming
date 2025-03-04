#include <stdio.h>

int main(){

    int name[] = {103,101,102,103,105};

    printf("%d", name[4]);
    return 0;
}

//
#include <stdio.h> 

int main(){
    int n;
    printf("Enter the Total no. of elements : ");
    scanf("%d", &n);

    int arr[n];
    for( int i = 0 ; i < n; i++){
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for( int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//
#include <stdio.h>
int main(){

    int name[] = {103,101,102,103,105};

    name[4] = 1050;
    printf("%d", name[4]);
    return 0;
}