#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < 9; i++) {
		printf("%d * %d = %d\n", n, i+1, (i+1)*n);
	}
}