#include <stdio.h> 

int sum(int number[]){
return number[0] + number[1];
}
int main(){
    int number[2];


    printf("enter the number 1  : ");
    scanf("%d", &number[0]);

    printf("enter the number 2 :  ");
    scanf("%d", &number[1]);

    int result = sum(number);
    printf("%d", result);
    return 0;

}