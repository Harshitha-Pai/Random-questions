// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int d,count5=0,count2=0,count1=0;
    printf("Enter an amount less than 40:");
    scanf("%d",&d);
    
    if(d<=25){
        int temp=d/5;
        count5=temp;
        d=d%5;
    }else{
        count5=5;
        d-=25;
    }
    
    if( d<=10){
       int temp1=d/2;
        count2=temp1;
        d=d%2;
    }else{
        count2=5;
        d-=10;
    }
    
    // if(d<=5){
    //     int temp2=d/1;
    //     count1=temp2;
    //     d=d%1;
    // }else{
    //     count1=5;
    //     d-=5;
    // }
    
    if(count2*5+count5*10+(amount))
    
    printf("%d",count1+count2+count5);
}