// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int R,P,S;
   int choice1;
   int choice2;
   
   printf("Player 1\n enter your choice\n 1. ROCK\n 2.PAPER\n 3. SCISSIOR\n");
   scanf("%d",&choice1);
   
  printf("Player 2\n enter your choice\n 1. ROCK\n 2.PAPER\n 3. SCISSIOR\n");
   scanf("%d",&choice2); 
   
   if(choice1==choice2){
       printf("draw\n");
   }
   else if(choice1==1&&choice2==2){
       printf("Player 2 wins\n");
   }
   else if(choice1==2&&choice2==1){
       printf("Player 1 wins\n");
   }
   else if(choice1==1&&choice2==3){
       printf("Player 1 wins\n");
   }
   else if(choice1==3&&choice2==1){
       printf("Player 3 wins\n");
   }
   else if(choice1==2&&choice2==3){
       printf("Player 2 wins\n");
   }
   else if(choice1==3&&choice2==2){
       printf("Player 1 wins\n");
   }
   else{
       printf("Invalid choice\n");
   }
   
    return 0;
}