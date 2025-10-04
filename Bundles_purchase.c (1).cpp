/*
Name:Jacob Mwendwa Nzau
ADM no.:CT101/G/26517/25
description:Data purchase service for different data bundles
*/
#include <stdio.h>
int main(){
printf("Mobile data bundle purchase\n");
printf("option\tBundle\tCost(KSH)\n");
printf("1.\t100MB\t50\n");
printf("2.\t500MB\t200\n");
printf("3.\t1GB\t350\n");
printf("4.\t2GB\t600\n");

int choice;

printf("Enter your choice(1-4): ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("You selected 100MB. Cost=Ksh.50");
      break;
   case 2:
printf("You selected 500MB. Cost=Ksh.200");
      break;
   case 3:
printf("You selected 1GB. Cost=Ksh.350");
      break;
   case 4:
printf("You selected 2GB. Cost=Ksh.600");
      break;
  default:
printf("Invalid choice!!");
}
return 0;
}