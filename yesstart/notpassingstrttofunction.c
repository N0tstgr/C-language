#include <stdio.h>
#include <string.h>
// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);


int main(){
    struct student s1 = {70, 9.8, "vikasht"};
    printInfo(s1);
s1.roll = 1660;
printf("student.roll = %d\n", s1.roll);
// this code is ununderstandable i have to understand this again// 8:56:00 time stamp



    return 0; }
    void printInfo(struct student s1){
printf("student information : \n");
printf("student.roll = %d\n", s1.roll);
printf("student.cgpa = %f\n", s1.cgpa);
printf("studnet.name = %s\n", s1.name);

s1.roll = 1660;
    
   


}