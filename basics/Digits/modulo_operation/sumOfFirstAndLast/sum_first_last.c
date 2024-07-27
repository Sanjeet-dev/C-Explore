// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.

#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Enter the four digits number:\n");
    scanf("%d",&num);
    int firstNum,lastNum,sum;

    lastNum = num%10;
    firstNum = num;
    while(firstNum >=10){
        firstNum/=10;
    }
    sum=firstNum+lastNum;
    printf("The sum of first and last digits is= %d", sum);

    return 0;
}