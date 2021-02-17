//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float inputHandBandD(float* valueH, float* valueB, float* valueD);
float volumeOfTromboloid(float* valueH, float* valueB, float* valueD);
int displayParameters(float* valH, float* valB, float* valD);
int displayOut(float volume);
int main(){
float h,b,d;
inputHandBandD(&h, &b, &d);
displayParameters(&h, &b, &d);
displayOut(volumeOfTromboloid(&h, &b, &d));
}

float inputHandBandD(float* valueH, float* valueB, float* valueD){
printf("Enter the values of H, B & D: ");
scanf("%f %f %f", &*valueH, &*valueB, &*valueD);
}

float volumeOfTromboloid(float* valueH, float* valueB, float* valueD){
return ((*valueH * *valueD * *valueB)+(*valueD / *valueB))/3;
}

int displayParameters(float* valH, float* valB, float* valD){
printf("\n The value of H = %f", *valH);
printf("\n The value of B = %f", *valB);
printf("\n The value of D = %f", *valD);
}

int displayOut(float volume){
printf("\n The volume the Tromboloid = %f", volume);
}
