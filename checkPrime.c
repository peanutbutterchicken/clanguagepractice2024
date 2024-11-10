//purpose: checks if an integer is a prime number or not
//date: 11/10/24
//author:ab1point55v

#include<stdio.h>
int main(){
    int num, i;
    printf("Input a positive integer: ");
    scanf("%d", &num);

    int factor=0;  //var factor is for the amount of factors of the integer
    for(i=1; i<=num/2; i++){  //using a simple calculation to get the factor of a number
        if(num%i==0){  //if the integer divided is equal to = 0 (being its factors) it iterates a value to var factor.
            factor++;
        }
    }

    if(factor==1){ //if the factor of the integer is 1/ meaning its a prime.
        printf("Integer is a prime number!");
    }
    else{
        printf("Integer is not a prime number!");
    }
    return 0;
}
