#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        sum = sum + i;

    }
    printf("this is the summation of the number up to n number %d\n",sum );
return 0;

}