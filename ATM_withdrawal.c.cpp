/*
Name: Jacob Mwendwa Nzau
ADM no:CT101/G/26517/25
description: ATM withdrawal
*/
#include <stdio.h>
int main(){
float balance;
float withdraw;
printf("Enter initial account balance: ");
scanf("%f", &balance);
while (balance>0){
printf("Enter amount to withdraw: ");
scanf("%f", &withdraw);
balance=balance-withdraw;
if(balance>0){
printf("Balance after withdrawal : %.2f\n", balance);
}
else {
printf("Insufficient funds or zero account balance to do withdrawal!!");}
}
return 0;
}