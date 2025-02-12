// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,week;
    double cost;
    printf("Enter the number of hours you want to stay at the cafe:");
    scanf("%d",&n);
    printf("Are you here on weekend?\n 1.YES\n 2.NO\n");
    scanf("%d",&week);
    
    if(n>0&&n<=1){
        cost=50;
    }
    else if(n>=2&&n<=5){
        cost=50 + (n-1)*40;
    }
    else if(n>5){
        cost= 50+4*40+ (n-5)*30;
    }
    else{
        cost=0;
    }
    
    if(week==1){   //Charge 5% if on weekend
       cost=cost+cost*0.05;
    }
    
    printf("Your total cost is %0.2f",cost);
}