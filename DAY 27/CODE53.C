 #include <stdio.h>

int main(void)
{
	int row, column;

	for (row = 1; row <= 9; row++) {
		int stars = row <= 5 ? 2 * row - 1 : 2 * (9 - row) - 1;

		for (column = 1; column <= stars; column++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
