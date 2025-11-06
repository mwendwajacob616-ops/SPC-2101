/*
Name: Jacob Mwendwa Nzau
ADM no: CT101/G/26517/25
description:To check if student is eligible to sit for examination.
*/
#include <stdio.h>
int main(){
float attendance;
float average_marks;
printf("Enter class attendance(in percentage): ");
scanf("%f", &attendance);
printf("Enter the average marks scored:");
scanf("%f", &average_marks);
if(attendance>=75 && average_marks>=40)
{
printf("Eligible to sit for examination");
}
else{
printf("Not eligible");
}
return 0;
}
