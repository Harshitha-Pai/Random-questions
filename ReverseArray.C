#include <stdio.h>

int main() {
    int n = 5;            
    int arr[5];           
    int rev[5];           
    printf("Enter any 5 numbers:\n");
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];  
    }
   
    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", rev[i]);   
    }

    return 0;
}
