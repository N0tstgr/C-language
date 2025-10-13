#include <stdio.h>
#include <string.h>



typedef struct computerengineeringstudent {
    int roll;
    int cgpa;
    int name[100];
} coe ;

int main(){
    coe s1;
    s1.roll = 70;
    s1.cgpa = 9.8;
    strcpy(s1.name, "vikashthetrillionaire");
printf("student roll = %d\n" , s1.roll);
printf("student cgpa = %f\n" , s1.cgpa);
printf("student name = %s\n" , s1.name);


return 0;
}

