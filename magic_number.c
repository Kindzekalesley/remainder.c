#include<stdio.h>
int main(){
        int number, digit1, digit2, digit3, sum, product;

        printf("Enter a 3-digit number: ");
        scanf("%d", &number);

        //extracting the digits
        digit1 = number/100;
        digit2 = (number / 10) % 10;
        digit3 = number % 10;
        //calculating the sum and product of digits
        sum = digit1 + digit2 + digit3;
        product = digit1 * digit2 * digit3;
        //checking if it is a magic number
        if(sum == product){
                printf("%d is a magic number.\n", number);
        } else {
                printf("%d is not a magic number.\n", number);
        }

        return 0;
}