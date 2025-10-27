#include <stdio.h>
float calculateFare(float distance);
int main() {
    float distance, totalFare;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);
    totalFare = calculateFare(distance);
    printf("Total Fare = KSh. %.2f\n", totalFare);
    return 0;
}
float calculateFare(float distance) {
    return distance * 50;
}