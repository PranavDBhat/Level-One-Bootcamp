//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float InputH();
float InputB();
float InputD();
float displayOut(float valueH, float valueB, float valueD);
int main(){
float h,b,d;
h = InputH();
d = InputD();
b = InputB();
displayOut(h, b, d);
}

float InputH(){
int x;
printf("Enter the value of H: ");
scanf("%d", &x);
return x;
}

float InputD(){
int x;
printf("\nEnter the value of D: ");
scanf("%d", &x);
return x;
}

float InputB(){
int x;
printf("\nEnter the value of B: ");
scanf("%d", &x);
return x;
}


float displayOut(float valueH, float valueB, float valueD){
printf("\n The volume the Tromboloid = %f", ((valueH * valueD * valueB)+(valueD / valueB))/3);
}
