#include <stdio.h>
#define PI 3.142
int main(){
float radius, height, volume, surfaceArea;
printf("Enter the radius of the cylinder: ");
scanf("%f", &radius);
printf("Enter the height of the cylinder: ");
scanf("%f", &height);
volume=PI*radius*radius*height;
surfaceArea=2*PI*radius*radius+2*PI*radius*height;
printf("Volume is %.2f\n", volume);
printf("SurfaceArea is %.2f\n", surfaceArea);
return 0;
}