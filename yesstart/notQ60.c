#include <stdio.h>
#include <string.h>

//typedef//
//Q print a code for your college on the basis of the branch and thier name do it // when ever you finish this course//
typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc ;
int main(){
    acc acc1 = {123, "vikash"};
    acc acc2 = {124, "vikashthetrillionaire"};
    acc acc3 = {125, "vikashthewinner"};



    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);

    printf("acc no = %d\n", acc2.accountNo);
    printf("name = %s\n", acc2.name);


    printf("acc no = %d\n", acc3.accountNo);
    printf("name = %s\n", acc3.name);
    return 0;
}
