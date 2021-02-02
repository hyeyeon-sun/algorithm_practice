#include <stdio.h>

int main() {
	int n;
	int k;
	scanf_s("%d", &n);

	for (int i = 0; i < n-1; i++) {

		for (int k = 0; k < i+1; k++)
			printf("*");
		
		for (int k = n-2*i+3; k > 0; k--)
			printf(" ");

		for (int k = 0; k < i + 1; k++)
			printf("*");
			
		printf("\n");
	}
	
	for (int i = 0; i < n; i++) {

		for (int k = n - i; k > 0; k--)
			printf("*");

		for (int k = 0; k < 2 * i; k++)
			printf(" ");

		for (int k = n - i; k > 0; k--)
			printf("*");

		if(i+1 != n)
			printf("\n");
	}
}