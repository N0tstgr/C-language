#include <stdio.h>
 int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    int age;
    char name[100];
    float cgpa;
  printf("enter the name :\n");
  scanf("%s",name);
  printf("enter the age\n");
  scanf("%d",&age);
  printf("enter the cgpa\n");
  scanf("%f", &cgpa);

  fprintf(fptr, "Student name :%s\t", name);
  fprintf(fptr,"student age :%d\t", age );
  fprintf(fptr,"student cgpa:%f\t", cgpa);


    fclose(fptr);
    return 0;


 }