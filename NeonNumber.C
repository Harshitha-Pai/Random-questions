#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int sum = 0;
    int sqr = num * num; 
    
    while(sqr != 0) {
        int rem = sqr % 10;  
        sum = sum + rem;     
        sqr = sqr / 10;      
    }
    
    if(sum == num) {
        printf("The given number is a neon number.\n");
    } else {
        printf("The given number is not a neon number.\n");
    }

    return 0;
}
