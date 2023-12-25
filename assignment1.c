//temp conversion from celcius to fahrenheit
#include<stdio.h>
float converttemp(float cel);
int main(){
    float cel;
    printf("enter temp in celcius");
    scanf("%f",&cel);
    float far=converttemp(cel);
    printf("far : %f",far);
    return 0;
}
float converttemp(float cel){
    float far=cel*(9.0/5.0)+32;
    return far;
}