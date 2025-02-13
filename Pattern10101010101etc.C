// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r=5,c=5,temp;
    int a=1,b=0;
    
    
    for(int i=0;i<r/2+1;i++){
        for(int j=0;j<c;j++){
            if(j%2==0){
                printf("%d\t",a);
            }
            else{
                printf("%d\t",b);
            }
         }
            printf("\n");
        for(int k=0;k<c;k++){
             if(k%2==0){
                printf("%d\t",b);
            }
            else{
                printf("%d\t",a);
            }
        }
        printf("\n");
   }
    
    return 0;
}