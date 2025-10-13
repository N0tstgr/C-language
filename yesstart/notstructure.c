#include <stdio.h>
#include <string.h>
// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.8;
    strcpy(s1.name, "vikash");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);


    struct student s2;
    s2.roll = 1833;
    s2.cgpa = 9.4;
    strcpy(s2.name, "luxxy");

printf("student name = %s\n", s2.name);
printf("student roll = %d\n", s2.roll);
printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 3493;
    s3.cgpa = 8.5;
    strcpy(s3.name, "zuxxy");

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}