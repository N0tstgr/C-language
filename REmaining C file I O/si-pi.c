#include <stdio.h>
 int main(){
    int rate, time, principal;
    float simpleInterest, compoundInterest;
    printf("enter the principal amount :");
    scanf("%d", &principal);
    printf("enter the time :");
    scanf("%d", &time);
    printf("enter the rate : ");
    scanf("%d", &rate);
    simpleInterest = (principal * rate * time)/100;
    // compoundInterest = principal*pow((1 + rate/100), time) - principal;
    printf("%f", simpleInterest);
    // printf("%f", compoundInterest);
    return 0;
 }