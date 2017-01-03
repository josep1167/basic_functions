#include <stdio.h>
#include "stdafx.h"
#include <algorithm>

int asize, lookup, anum[100];
int x;
void lin_search() {
	printf("Enter length of array:");
	scanf_s("%i", &asize);

	printf("Enter %i intergers:", asize);
	for (x = 0; x < asize; x++) {
		scanf_s("%i",&anum[x]);
	}
	printf("Enter interger to search: ");
	scanf_s("%i", &lookup);
	for (x = 0; x < asize; x++) {
		if (anum[x] == lookup) {
			printf("%i is in location %i\n", lookup, x);
		}
	}
}


void bin_search() {
	int mid = 0;
	printf("Enter length of array:");
	scanf_s("%i", &asize);

	printf("Enter %i intergers:", asize);
	for (x = 0; x < asize; x++) {
		scanf_s("%i", &anum[x]);
	}

	printf("Enter interger to search:");
	scanf_s("%i", &lookup);
	mid = asize / 2;
	x = 0;
	while (x <= asize) {
		if (anum[mid] < lookup) {
			x = mid + 1;
		}
		else if (anum[mid] > lookup) {
			asize = mid - 1;
		}
		else if (anum[mid] == lookup) {
			printf("%i is in location %i", lookup, x);
		}
	}

}