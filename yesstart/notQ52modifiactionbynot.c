
#include <stdio.h>
#include <string.h>

int countVowels(char str[]);

int main(){
    char str[] = "vikashthetrillionaire";
    printf("Vowel are : %d", countVowels(str));
}
int countVowels(char str[]){
int count = 0;

for(int i=0; str[i] != '\0'; i++){
if (str[i] == 'i' ){
    count++;
}
    
}
return count;
}

//Greatvikashthetrillionaire
































































