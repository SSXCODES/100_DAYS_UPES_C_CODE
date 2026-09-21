
#include <stdio.h>

int main(void)
{
	int n, value;
	int positive = 0, negative = 0, zero = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &value);

		if (value > 0)
			positive++;
		else if (value < 0)
			negative++;
		else
			zero++;
	}

	printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

	return 0;
}
