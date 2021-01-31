#include <stdio.h>

int main() {
	int n;
	int num;
	int min = 1000000;
	int max = -1000000;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}

	printf("%d %d", min, max);

}