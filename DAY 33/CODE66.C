#include <stdio.h>

int main(void) {
	int n, value;
	scanf("%d", &n);

	int array[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &value);

	int position = 0;
	while (position < n && array[position] < value) {
		position++;
	}

	for (int i = n; i > position; i--) {
		array[i] = array[i - 1];
	}
	array[position] = value;

	for (int i = 0; i <= n; i++) {
		if (i > 0) printf(" ");
		printf("%d", array[i]);
	}
	printf("\n");
	return 0;
}
