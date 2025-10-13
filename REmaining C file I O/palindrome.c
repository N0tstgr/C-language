#include <stdio.h>
int main(){
    int original, reversed = 0, a, remainder;
    printf("Enter the number  ");
    scanf("%d", &a);
    original = a;
    while(a!=0){
        remainder = a%10;
        reversed = reversed * 10 + remainder;
        a = a/10;


    }

    if(original  == reversed){
        printf("this is the palindrom no %d", original);

    }else{
        printf("this is not palindrome no number ", original);
    }
    return 0;

}