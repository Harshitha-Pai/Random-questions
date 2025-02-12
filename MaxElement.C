// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int arr[6]={33, 55, 76, 66,19,34};
    int max;
    
    for(int i=0;i<6;i++){
        max= arr[i];
        for(int j=0;j<6;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
    }
    printf("max element is %d", max);

    return 0;
}