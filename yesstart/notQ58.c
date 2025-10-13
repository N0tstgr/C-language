#include <stdio.h>
#include <string.h>




struct vector{
    int x;
    int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
struct complex {
    int real;
    int img;
};

int main(){
struct complex number1 = {8, 9};
struct complex *ptr = &number1;
printf("real part = %d\n", ptr->real);
printf("img part = %d\n" ,ptr->img);
return 0;
}
    void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
printf("sum of x is : %d\n", sum.x);
printf("sum of y is : %d\n", sum.y);

    }


