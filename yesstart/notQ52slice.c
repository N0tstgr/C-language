//Helloworld let n= 3 and m= 6  then in this word it only print letter from 3 to 6 and other letter are slice down//

















//salt is used for mixing the password and saving it from hacking//

#include <stdio.h>
#include <string.h>


void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);

int main(){
    char str[] = "vikashthetrillionaire";
    slice (str, 4, 8);
}
void slice(char str[], int n, int m) { //n and m are must be a valid value//
char newStr[100];
int j = 0;
for(int i=n; i<=m; i++, j++){
newStr[j] = str[i];

}
newStr[j] = '\0';
puts(newStr);


}

void salting(char password[] ){
    char salt[] = "123";
    char newPass[200];

strcpy(newPass, password); //newPass = "test"
strcat(newPass , salt); //new pass = "test + 123";
puts(newPass);


}


int countLength(char arr[]) {
int count = 0;
for(int i=0; arr[i]!='\0'; i++) {
count++;
}
return count-1;
}
void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
printf("\n");
}

















































































