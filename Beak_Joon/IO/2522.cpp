#include <stdio.h>

int main() {
	int n;
	int k;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int k = n - (i + 1); k > 0; k--)
			printf(" ");

		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");


		printf("\n");
	}
}