#include <stdio.h>
 int main(){
    FILE *fptr;
    fptr = fopen("texst.txt", "a");
   fprintf(fptr, "%c", 'V');
  fprintf(fptr, "%c", 'I');
  fprintf(fptr, "%c", 'K');
    fprintf(fptr, "%c", 'A');
      fprintf(fptr, "%c", 'S');
        fprintf(fptr, "%c", 'T');
fclose(fptr);
    return 0;

 }