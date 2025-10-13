#include <stdio.h>
#include <string.h>
// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {70, 9.8, "vikashthetrillionaire"};
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("student name = %f\n", s1.name);
    return 0;

}