//find largest element in an array
#include<stdio.h>
int main(){
    int x; 
    int arr[100];
    printf("enter the number of elements(1 to 100)");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("enter %d element of array",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("largest number is %d",arr[0]);
    return 0;
}