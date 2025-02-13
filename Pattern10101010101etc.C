// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a=1;
    
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d\t",a%2);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}