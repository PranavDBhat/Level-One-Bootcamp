//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int inputSize(int* si);
int inputArray(int n, int arr[]);
int sumOfn(int n, int ar[]);
void displayOut(int s);
int main(){
int n, a[100];
inputSize(&n);
inputArray(n, a);
displayOut(sumOfn(n , a));
}

int inputSize(int* si){
printf("Enter the array size: ");
scanf("%d", &*si);
}

int inputArray(int n, int arr[]){
printf("\nEnter the elements: ");
for(int i=0;i<n;i++)
scanf("%d", &arr[i]);
}

int sumOfn(int n, int ar[]){
int sum=0;
for(int i=0;i<n;i++)	
sum=sum+ar[i];
return sum;
}

void displayOut(int s){
printf("\nSum = %d", s);
}
