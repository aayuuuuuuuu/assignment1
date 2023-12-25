// write a function to swap two numbers using a third variable
#include<stdio.h>
void swap(int*a,int*b);
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}
void swap(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}