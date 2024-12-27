// Marks Judging system:
// >50% = Fail, 50% < per <70% = Good, 
// per > 70% = Excelent.

#include <stdio.h>

int main() {
    float marks1, marks2, marks3;
    printf("Enter 1st Subject Marks : ");
    scanf("%f", &marks1);
    printf("Enter 2nd Subject Marks : ");
    scanf("%f", &marks2);
    printf("Enter 3rd Subject Marks : ");
    scanf("%f", &marks3);

    float per = (marks1 + marks2 + marks3) / 300 * 100;
    printf("%f", per);

    if(per < 50){
        printf("Failed");
    }
    else if(50 < per < 70){
        printf("Good");
    }
    else{
        printf("Excelent");
    }

    return 0;
}
