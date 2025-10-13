#include <stdio.h>
 int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");
   

///foult do it again//
    char ch;
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
      fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
  
    
fclose(fptr);
    return 0;

 }