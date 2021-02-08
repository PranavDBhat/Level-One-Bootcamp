//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main(){
float h, b, d;
printf("Enter the values: ");
scanf("%f %f %f", &h, &b, &d);

printf("The volume is = %f", ((h * d * b)+(d / b))/3);
}
