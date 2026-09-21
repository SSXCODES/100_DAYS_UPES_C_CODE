 #include <stdio.h>

int main(void)
{
	int n, i, element, found = 0;
	int array[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &element);

	for (i = 0; i < n; i++) {
		if (array[i] == element) {
			found = 1;
			for (; i < n - 1; i++) {
				array[i] = array[i + 1];
			}
			n--;
			break;
		}
	}

	if (found) {
		for (i = 0; i < n; i++) {
			if (i > 0) {
				printf(" ");
			}
			printf("%d", array[i]);
		}
	}

	return 0;
}
