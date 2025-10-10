/*
Name:Jacob Mwendwa Nzau
ADM: CT101/G/26517/25
*/
#include <stdio.h>
#include <string.h>
int main(){
char password[20];
do{
printf("Enter password: ");
scanf("%s", &password);
}
while(strcmp(password, "1234")!=0);
{
printf("Access granted" );
}
return 0;
}