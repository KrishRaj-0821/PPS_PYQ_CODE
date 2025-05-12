// Write a program to copy the contents of one array into another in reverse order.
#include<stdio.h>
int main(){
    int arr[5] = {15, 80, 97, 45, 23};
    int copy[5];
    for(int i = 0; i < 5; i++){
        copy[i] = arr[5-1-i];
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", copy[i]);
    }
    return 0;
}