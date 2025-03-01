// Write a C Program to implement Greatest common divisor (GCD) using recursive function

#include<stdio.h>

int gcd(int a, int b);

int main(){
    int n1, n2, res;
    printf("\n Enter the two numbers:");
    scanf("%d\n%d", &n1, &n2);
    res = gcd(n1, n2);
    printf("\n GCD of %d and %d=%d", n1, n2, res);
    return 0;
}


int gcd(int a, int b){
    int rem;
    rem = a%b;
    if(rem==0){
        return b;
    } else {
        return(gcd(b,rem));
    }
}
