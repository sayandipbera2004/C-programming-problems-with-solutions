/*Swapping of two variables without using extra variable*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a\n ");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping value of a=%d b=%d",a,b);
    return 0;
}
