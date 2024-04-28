/*Swapping of two variables using extra varible*/
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before Swapping a=%d , b=%d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping: a=%d , b=%d \n",a,b);
    return 0;
}