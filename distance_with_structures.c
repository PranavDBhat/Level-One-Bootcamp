//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct point {
int x1, x2;
int y1, y2;
};

float distnCal(struct point p);
int main(){
struct point points;
printf("Enter the values for X1, X2, Y1 and Y2: ");
scanf("%d %d %d %d", &points.x1, &points.x2, &points.y1, &points.y2 );
distnCal(points);
}


float distnCal(struct point p){
printf("\nThe Distance is = %f" ,sqrt(((p.x2 - p.x1) * (p.x2 - p.x1)) + ((p.y2 - p.y1) * (p.y2 - p.y1))));
}
