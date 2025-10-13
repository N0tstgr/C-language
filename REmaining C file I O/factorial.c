#include <stdio.h>
int main(){
    int n,i,factorial = 1;

    printf("Enter the number to be factorialised : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
    factorial = factorial * i;
    }
    printf("this is the factorial of the number %d",factorial);
    return 0;
}