/*
Name: Jacob Mwendwa
Reg no: CT101/G/26517/25
description: prompts to check bank balance and also print ther user's height
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
  
  printf ("Height: %f metres.\n",height);
  printf ("Your Bank balance: %f shillings.\n",balance);
  printf ("Phone number: %d.\n",number);
    return 0;
}