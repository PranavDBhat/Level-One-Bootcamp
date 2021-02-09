//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction{
int n1, n2;
int d1, d2;
};
int denLcm(int deno1, int deno2);
int addFra(struct fraction frac);

int main(){
struct fraction fra;
printf("Enter the fraction values n1 / d1 & n2/d2: ");
scanf("%d %d %d %d", &fra.n1, &fra.d1, &fra.n2, &fra.d2);
addFra(fra);
}

int denLcm(int deno1, int deno2){
int max;

if(deno1 == deno2){
max = deno1;
return max;
}
else if(deno1 > deno2 ){
max = deno1;
}
else{
max = deno2;
}

while(1){
if(max % deno1 == 0 && max % deno2 == 0){
return max;
}
max++;
}
}

int addFra(struct fraction frac){
int lcm, num1,num2,num3;
lcm = denLcm( frac.d1, frac.d2);
num1 = frac.n1 * (lcm / frac.d1);
num2 = frac.n2 * (lcm / frac.d2);
num3 = num1 + num2;
printf("\nThe Sum of the fractions are = %d / %d", num3, lcm);
}
