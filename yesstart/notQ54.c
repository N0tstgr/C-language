#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);
int main() {
    char str[] = "Vikashthetrillionaire";
    char ch = 'V';
    checkChar(str, ch); //this is calling of character//


}
void checkChar(char str[], char ch) {
for(int i = 0; str[i] != '\0'; i++){

    if(str[i] == ch) {
        printf("character is present!");
        return;
    }
}

printf("character is Not present");
}

