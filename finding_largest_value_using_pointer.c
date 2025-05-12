#include<stdio.h>
int largest_value(int arr[]){
    int *p = arr;
    int max = *p;
    for(int i=1; i<5; i++) {
        if(*(p+i) > max)
            max = *(p+i);
    }
   return max;
}
int main() {
    int arr[5] = {10, 50, 30, 70, 20};
    int max = largest_value(arr);
    printf("Largest: %d", max);
    return 0;
}