//WAP to find the sum of two fractions.
#include<stdio.h>

struct fraction{
    int num;
    int den;
};

int denLcm(int deno1, int deno2);
int addFra(struct fraction frac1, struct fraction frac2);

int main(){
    struct fraction fra1, fra2;
    printf("Enter the fraction values n1 / d1 & n2/d2: ");
    scanf("%d %d %d %d", &fra1.num, &fra1.den, &fra2.num, &fra2.den);
    addFra(fra1, fra2);
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

int addFra(struct fraction frac1, struct fraction frac2){
    int lcm, num1,num2,num3;
    lcm = denLcm( frac1.den, frac2.den);
    num1 = frac1.num * (lcm / frac1.den);
    num2 = frac2.num * (lcm / frac2.den);
    num3 = num1 + num2;
    printf("\nThe Sum of the fractions are = %d / %d", num3, lcm);
}
