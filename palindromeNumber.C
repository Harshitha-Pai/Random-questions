#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int temp= num;
    
    int rev=0; 
    int count=0;

    while (num != 0) {
      int rem = num % 10;      
        rev=rev*10+rem;
        num = num / 10; 
        count++;        
    }
    
    if(temp==rev){
        printf("the given number is a palindrome");
    }else{
        printf("the given number is not palindrome");
    }


    return 0;
}