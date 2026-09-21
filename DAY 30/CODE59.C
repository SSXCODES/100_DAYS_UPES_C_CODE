
#include <stdio.h>

int main(void)
{
	int n, value;
	int even = 0, odd = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &value);
		if (value % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("Even=%d, Odd=%d\n", even, odd);
	return 0;
}
