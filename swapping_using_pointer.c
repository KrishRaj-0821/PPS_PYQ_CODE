#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    // swapping using pointers
    int a, b;
    a = 5;
    b = 10;
    printf("before swapping: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("after swapping: a = %d, b = %d\n",a,b);
    return 0;
}