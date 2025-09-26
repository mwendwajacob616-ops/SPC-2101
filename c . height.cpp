/*
Name: Jacob Mwendwa Nzau
Reg no: CT101/G/26517/25
description: prompt to check bank balance using c program 
*/
#include<stdio.h>
int main()
{
  float height;
  float balance;
  int number;
  printf ("Enter your height(in metres): ");
  scanf ("%float", &height);
  printf ("Enter your bank balance(in shillings): ");
  scanf ("%float", &balance);
  printf ("Enter your phone number: ");
  scanf ("%d", &number);
  
  printf ("You are %f metres.\n",height);
  printf ("Your account balance is %f shillings.\n" ,balance);
  printf ("Your phone number is %d.\n", number);
    return 0;
}