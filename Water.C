// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    double cost;
    printf("Enter the no of liters you need:");
    scanf("%d",&n);
    
    if(n<50&&n!=0){
        cost= n*2;
    }
    else if(n>50&&n<=150){
        cost=50*2 + (n-50)*5;
    }
    else if(n>150){
        cost= 50*2 +100*5+ (n-150)*8;
    }
    else{
        cost=0;
    }
    
    if(cost>800){
        cost=cost*0.1+cost;
    }
    
    printf("Total cost is %0.2f",cost);
}