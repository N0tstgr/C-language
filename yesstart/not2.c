#include <stdio.h>
//write a program to store the first n fibonaaci numbers.//
// 0,1,1,2,3,5,8,13,21...//

int main (){
    int n;
    printf("enter n (n>2); ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1; // these are always true//

    for(int i=2; i<n; i++) { //1,2,3
    fib[i] = fib[i-1] + fib[i-2];
    printf("%d  \t" , fib[i] );
    }
    printf("\n");

    return 0;
}