/*
Name: Jacob Mwendwa Nzau
ADM no: CT101/G/26517/25
Description: Creating the number guessing game using do, while loops.
*/
#include <stdio.h>
int main (){
int secret_number=12;
int guess;
int attempts=0;
do {
printf("Enter a guess( between 1-20): ");
scanf("%d", &guess);
attempts++;
if(guess>secret_number){
printf("Too high!\n");
}
else if(guess<secret_number){
printf("Too low!\n");
}
else {
printf("Congratulations!\n");
printf("Total attempts:%d\n", attempts);
}
}
while (guess !=secret_number);
return 0;
}
