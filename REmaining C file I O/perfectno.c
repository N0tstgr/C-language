#include <stdio.h>
 int main(){
int i, a, sum=0;
printf("enter the number");
scanf("%d", &a);
for(i = 0; i<=a/2; i++);{
if(a%i==0){
    sum = sum + i;
}

    }

if(sum == a){
    printf("perfect no");
}else{
    printf("not perfect no");
}


//     Divisors of 6: 1, 2, 3, 6
// Proper divisors = 1 + 2 + 3 = 6
return 0;
 }