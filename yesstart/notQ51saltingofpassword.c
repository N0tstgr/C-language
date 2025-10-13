


//salt is used for mixing the password and saving it from hacking//

#include <stdio.h>
#include <string.h>


void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
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



































































