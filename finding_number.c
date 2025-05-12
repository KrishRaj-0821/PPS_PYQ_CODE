#include<stdio.h>
int main(){
    int arr[5] = {15, 80, 97, 45, 23};
    int found = 0;
    int index = -1;
    for(int i = 0;i < 5;i++){
        if(arr[i] == found){
            index = i;
            printf("%d Found at index %d\n",found, index);
            break;
        }
        
    }
    if(index == -1){
        printf("%d Not Found\n",found);
    }
    return 0;
}