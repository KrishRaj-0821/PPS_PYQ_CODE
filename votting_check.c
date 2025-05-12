// condition ? expression_if_true : expression_if_false;
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    char* eligibility = (age >= 18) ? "Eligible for vote" : "Not Eligible for vote";
    printf("%s\n", eligibility);
    return 0;
}