#include <stdio.h>
 int main(){
    int i=0,j=0,n;
    printf("enter the number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
            printf("%d" ,j);

        }
        printf("\n");

    }
    return 0;
 }