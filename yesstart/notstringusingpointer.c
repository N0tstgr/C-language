#include <stdio.h>
void printString(char arr[]);


int main(){

    // char firstname[50];
    // scanf("%s", firstname);
    // printf("your name is %s", firstname);

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);
// this program cannot change the input of the function//
    char cannotChange[] = "Hello World";
    puts(cannotChange);
    cannotChange = "Hello";
    return 0;
}
void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
printf("\n");
}