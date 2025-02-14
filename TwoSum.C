// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int target=7;
   int arr[5]={5,7,2,11,9};
   int n=5;
   int a,b;
   
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(arr[i]+arr[j]==target){
                a= i;
                b= j;
           }
       }
   }
  printf("Array index is at %d and %d", a,b);
    return 0;
}