/*
Name: Jacob Mwendwa Nzau
ADM no: CT101/G/26517/25
description: water bill calculator.
*/
#include <stdio.h>
int main(){
float unit;
float charge;
printf("Enter water units consumed: ");
scanf("%f", &unit);
if(unit<=30){
charge=20;
}
    else if(unit>30 && unit<=60){
    charge=25;
    }
    else if(unit>60){
    charge=30;
    }
printf("Total bill is Ksh.%.2f", charge);
return 0;
}   