// Insert an element into an array at a given 1-based position.
#include <stdio.h>

int main(void)
{
	int n, position, value, i;
	int array[1000];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d %d", &position, &value);

	if (position < 1 || position > n + 1) {
		return 0;
	}

	for (i = n; i >= position; i--) {
		array[i] = array[i - 1];
	}
	array[position - 1] = value;

	for (i = 0; i <= n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
