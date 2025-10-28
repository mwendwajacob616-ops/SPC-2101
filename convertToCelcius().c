/*
Name:Jacob Mwendwa Nzau
adm no:CT101/G/26517/25
*/
#include <stdio.h>
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}
int main() {
    float F, C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = convertToCelsius(F);
    printf("Temperature in Celsius: %.2f\n", C);
    return 0;
}