#include <stdio.h>
 int main(){
    int i=0,j=0,n;
    printf("enter the number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=0; j<=n - i + 1; j++){
            printf("*");

        }
        printf("\n");

    }
    return 0;
 }