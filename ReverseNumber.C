#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int rev=0; 
    int count=0;

    while (num != 0) {
      int rem = num % 10;      
        rev=rev*10+rem;
        num = num / 10; 
        count++;        
    }

        printf("%d",rev);
        printf("total count %d",count);


    return 0;
}