#include <stdio.h>
#include "stdafx.h"

int num1, num2,add;
int i,temp;
void hello_world() {
	printf("Hello world\n");
}

void print_int() {
	printf("Enter Interger:  ");
	scanf_s("%i", &num1);
	printf("\nInterger Entered is %i\n", num1);
}

void add_2_num() {
	printf("Enter two numbers, one after the other\n");
	scanf_s("%i%i", &num1, &num2);
	add = num1 + num2;
	printf("The sum of %i and %i is %i\n", num1, num2, num1+num2);
}
 
void odd_or_even() {
	printf("Enter Interger:  ");
	scanf_s("%i", &num1);
	if (num1 % 2 == 0) {
		printf("%i is Even", num1);
	}
	else {
		printf("%i is Odd", num1);
	}
}

void four_func_cal() {
	printf("Enter two numbers, one after the other\n");
	scanf_s("%d%d", &num1, &num2);
	printf("Sum =%i\n", num1+ num2);
	printf("Differnce =%i\n", num1- num2);
	printf("Product =%i\n", num1*num2);
	printf("Quotient =%0.2f\n", num1/num2);
}

void dec_2_bin() {
	printf("Enter Interger:  ");
	scanf_s("%i", &num1);
	printf("%i in Binary is ", num1);
	for (i = 7; i >= 0; i--)
	{
		temp = num1 >> i;

		if (temp & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}