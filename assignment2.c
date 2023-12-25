//convert temp far to celcius
#include<stdio.h>
float converttemp(float far);
int main(){
    float far;
    printf("enter temp in fahrenheit");
    scanf("%f",&far);
    float cel=converttemp(far);
    printf("celcius : %f",cel);
    return 0;
}
float converttemp(float far){
    float cel=(far-32)*(5.0/9.0);
    return cel;
}