#include<stdio.h>
int main(){
    // int num = 1;
    // // printing pattern
    // for(int i = 1; i <= 5; i++){
    //     for(int k = 5 ; k > i; k--){
    //         printf(" \t");
    //     }
    //     for(int j = 1; j <= 2*i - 1; j++){
    //         printf("%d\t", num);
    //         num++;
    //     }
    //     printf("\n");
    // }
    int a = 10;
    int b = 20;
    int y = ++a + b--;
    int z = --a + b++;
    printf("%d   ,   %d",y,z);
    return 0;
}