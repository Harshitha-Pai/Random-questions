#include <stdio.h>

int main(){
    int arr[6]={1,2,3,4,5,6};
    int *ptr=arr;

    printf("Array elements:");
    for(int i=0;i<6;i++){
        printf("%d\t",*(ptr+i));
    }
}
