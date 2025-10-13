#include <stdio.h>
int main(){
    int a[100], flag = 0, n, i, item;
    
    printf("enter the number of element : \n");
    scanf("%d", &n);
    printf("enter the element in the array : \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
printf("enter the element to be searched : \n");
scanf("%d", &item);
for(i=0; i<n; i++){
    if(item == a[i]){
        flag = 1;
        break;
    }

}

    if(flag ==1){
        printf("search is successful ", i + 1);
        
    }else{
        printf("search is unsuccessful");
    }
return 0;
    
}