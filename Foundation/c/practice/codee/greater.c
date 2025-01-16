// Greatest among three : 

int main(){
    int a, b, c;
    printf("Enter three Numbers : ");
    scanf("%d %d %d", &a, &b, &c );

    if(a >= b && a >= c){
        printf("A is Greatest among three");
    }
    else if(b >= a && b >= c){
        printf("B is Greatest among three");
    }
    else{
        printf("C is Greatest among three");
    }

    return 0;
}