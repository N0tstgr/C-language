#include <stdio.h>
#include <stdlib.h>
 int main(){
    int *fptr, i,n, sum;
    printf("enter the value of n : ");
    scanf("%d", &n);
 fptr = (int*)malloc(n * sizeof(int ));

 if(fptr == NULL){
    printf("memory allocation not found\n");
 }

 printf("enter the number %d:\n", n);
 for(i = 0; i<n; i++){
    scanf("%d", &fptr[i]);
    sum = sum + fptr[i];

 }
 

 printf("%d", sum);
 free(fptr);

    return 0;
 }