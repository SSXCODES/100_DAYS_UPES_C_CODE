 #include <stdio.h>

int main(void)
{
	int groups[] = {4, 5, 3, 1};

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < groups[i]; j++) {
			printf("*\n");
		}
		if (i < 3) {
			printf("\n");
		}
	}

	return 0;
}
