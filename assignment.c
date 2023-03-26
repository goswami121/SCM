#include<stdio.h>
const float PI = 3.14;
float area(float r);
float circum(float r);
void main() {
 float r;
 printf("Enter radius: ");
 scanf("%f", &r);
 printf("Area : %f\n", area(r));
 printf("Circumference: %f\n", circum(r));
}

float area(float r) {
  return PI * r * r;
}

float circum(float r) {
  return 2 * PI * r;
}
