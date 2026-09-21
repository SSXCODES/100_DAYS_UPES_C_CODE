
#include <stdio.h>

int main(void)
{
	long long number;
	int frequency[10] = {0};
	int most_frequent = 0;

	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	if (number == 0)
		frequency[0] = 1;
	else {
		while (number > 0) {
			frequency[number % 10]++;
			number /= 10;
		}
	}

	for (int digit = 1; digit < 10; digit++) {
		if (frequency[digit] > frequency[most_frequent])
			most_frequent = digit;
	}

	printf("%d", most_frequent);
	return 0;
}
