/*Write a program to delete one element from any position of the existing 1-D array. Finally display the resultant array.*/
#include<stdio.h>
int main(){
    int arr[100],size,position,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter %d Elements:\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to delete(1-%d)",size);
    scanf("%d",&position);
    if(position<1 || position >size){
        printf("Invalid position!\n");
    }
    else{
        for(i=position-1;i<size-1;i++){
            arr[i]=arr[i+1];
      }
      size--;
       printf("Resultant array after deletion:\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
    return 0;
}