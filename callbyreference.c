#include<stdio.h>

void square(int n);
void _square(int *n);

//not affect any value which declared inside main function
int main(){
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("Number = %d\n", number);
    return 0;
}

//call by reference
//we pass address of variable as argument
void square(int n){
    n=n*n;
    printf("Square = %d\n", n );
}

void _square(int *n){
    *n=(*n)*(*n);
    printf("Square = %d\n",*n );
}