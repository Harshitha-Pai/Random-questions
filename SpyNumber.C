#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    int num;
    int sum = 0;
    int prod = 1;

    while (n != 0) {
        num = n % 10;      
        sum = sum + num;    
        prod = prod * num;  
        n = n / 10;         
    }
    
    if (sum == prod) {
        printf("IT IS A SPY NUMBER YAY\n");
    } else {
        printf("IT IS NOT A SPY NUMBER YAY\n");
    }

    return 0;
}
