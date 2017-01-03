// JPP_code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FUNC.H"

int op = 1;
void option(){
	if (op == 0) {
		//null
	}
	else if (op == 1) {
		hello_world();
	}
	else if (op == 2) {
		print_int();
	}
	else if (op == 3) {
		add_2_num();
	}
	else if (op == 4) {
		four_func_cal();
	}
	else if (op == 5) {
		dec_2_bin();
	}
	else if (op == 6) {
		lin_search();
	}
	else if (op == 7) {
		bin_search();
	}
	else {
		printf("Please Enter a correct option\n");
	}
}


void menu() {
	printf("\n1: Print Hello World\n");
	printf("2: Print Interger\n");
	printf("3: Add two Intergers\n");
	printf("4: 4 function calculator\n");
	printf("5: DEC to BIN\n");
	printf("6: Array Linear Search\n");
	printf("7: Array Binary Search\n");
	printf("0: Quit\n");
	printf("Enter Option:");
	scanf_s("%i", &op);
	printf("\n");
}

int main()
{
	while (op != 0) {
		menu();
		option();
	}
	return 0;
}