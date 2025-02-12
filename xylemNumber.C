// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    
    printf("enter the number:");
    scanf("%d",&n);
    int qt;
    int top=n%10;
    qt=n/10;
    
    int rem;
    int sum=0;
    
    while(qt>9){
        rem= qt%10;
        sum+=rem;
        qt=qt/10;
    }
    int first=qt;
    
    int firstlast=first+top;
    
    if(firstlast==sum){
        printf("It is a xylem number");
    }
    else{
        printf("its not a xylem number");
    }
    return 0;
}
