/*
Name: Jacob Mwendwa Nzau
Reg no: CT101/G/26517/25
description:to check loan eligibility using c program
*/
#include <stdio.h>
int main(){
int age;
float income;
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your yearly income(in shillings): ");
scanf("%f", &income);
if(age>=21 && income>=21000)
printf("Congratulations,you qualify for a loan");
else 
printf("Unfortunately,we are unable to offer you a loan at this time");
return 0;
}
