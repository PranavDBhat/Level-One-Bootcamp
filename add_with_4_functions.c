//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int inputA();
int inputB();
int sum(int x, int y);

int main(){
int a, b;
a = inputA();
b = inputB();
sum(a, b);
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

int sum(int x, int y){
printf("Sum = ", x+y);
}
