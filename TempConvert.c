#include <stdio.h>

int main(){
    float tempF;

    printf("Type in a temperature in Celsius to be converted to Fahrenheit.\n");
    scanf("%f", &tempF);

    float x= tempF;
    tempF= ((x*9)/5)+32;
    printf("%f\n", tempF);
}
