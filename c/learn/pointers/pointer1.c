 #include <stdio.h>

 int main(){
    int a = 23;
    int *pntr = &a;

    printf("%d\n", pntr);
    printf("%d\n", *pntr);
    printf("%d\n", &pntr);
    printf("%d\n", a);
    printf("%d", &a);

    return 0;
 }