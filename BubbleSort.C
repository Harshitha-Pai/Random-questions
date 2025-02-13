// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[6]={0,1,1,0,1,0};
    int n=6,temp;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);

    return 0;
}