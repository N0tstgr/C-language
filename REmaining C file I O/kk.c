#include <stdio.h>
int main(){
    int i,j, matrix[i][j], sum = 0;

    // printf("Enter the number of rows : ");
    // scanf("%d", &a);
    // printf("Enter the number of coloumn : ");
    // scanf("%d", &b);
    printf("Enter the value of the matrix : ");
   

for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        scanf("%d", &matrix[i][j]);
    }
}

for(i=0; i<3; i++){
    sum = sum + matrix[i][i];
}

printf("%d", sum);
return 0;

}