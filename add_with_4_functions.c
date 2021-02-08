//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int inputA();
int inputB();
int Sum(int x, int y);
int display(int x);
int main(){
int a, b, sum;
a = inputA();
b = inputB();
sum = Sum(a, b);
display(sum);
}

int inputA(){
int x;
printf("Enter A value: ");
scanf("%d",&x);
return x;
}

int inputB(){
int x;
printf("Enter B value: ");
scanf("%d",&x);
return x;
}

int Sum(int x, int y){
return x+y;
}

int display(int x){
printf("\nSum = ",x);
}

