//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction{
    int num[100];
    int den[100];
};

int fracSum(int n, int nu[],int de[]);
int gcd(int a, int b);
int lcm(int arr[], int n);

int main(){
    struct fraction fra;
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Enter numerator: ");
        scanf("%d", &fra.num[i]); 
        printf("Enter denominator: ");
        scanf("%d", &fra.den[i]);
    }
fracSum(n, fra.num, fra.den);
}

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 

int lcm(int arr[], int n){
    int lcm = arr[0];
    for (int i = 1; i < n; i++)
        lcm = (((arr[i] * lcm)) / (gcd(arr[i], lcm)));
    return lcm;
}

int fracSum(int n, int nu[],int de[]){
    int franu = 0, frade = lcm(de, n);
    for (int i = 0; i < n; i++) 
        franu = franu + (nu[i]) * (frade/ de[i]);
    printf("Sum = %d/%d", franu,frade);
}
