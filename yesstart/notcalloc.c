#include <stdio.h>
int main(){
    float *ptr;
    ptr =(float*) malloc(5 * sizeof(float));





    for(int i=0; i<5; i++) {
        printf("%f\n", ptr[i]);
        return 0;
    }
}

//scanf is use for to take the input of the user//