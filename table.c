#include<stdio.h>

int main(){
    int n;
    printf("Enter Numbers: ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
}