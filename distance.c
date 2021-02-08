//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int inputX(int* x1, int* x2);
int inputY(int* y1, int* y2);
float distnCal(int* x1, int* x2, int* y1, int* y2);
int displayOut(float dis);
int main(){
int x1, y1, x2, y2;
inputX(&x1, &x2);
inputY(&y1 ,&y2);
displayOut(distnCal(&x1, &x2, &y1, &y2));
}

int inputX(int* x1, int* x2){
printf("Enter the value of x1 and x2: ");
scanf("%d %d", &*x1, &*x2);
}

int inputY(int* y1, int* y2){
printf("Enter the value of y1 and y2: ");
scanf("%d %d", &*y1, &*y2);
}

float distnCal(int* x1, int* x2, int* y1, int* y2){
return sqrt(((*x2 - *x1) * (*x2 - *x1)) + ((*y2 - *y1) * (*y2 - *y1)));
}
int displayOut(float dis){
printf("\nThe Distance is = %f", dis);
}
