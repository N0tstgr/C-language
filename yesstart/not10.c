#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "w");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    // fprintf(fptr, "%c\n", 'M');
    // fprintf(fptr, "%c\n", 'A');
    // fprintf(fptr, "%c\n", 'N');
    // fprintf(fptr, "%c\n", 'G');
    // fprintf(fptr, "%c\n", 'O');
    
    fclose(fptr);
    

    return 0;
}
