#include <stdio.h>

int main() {
	int num[8], a;
	printf("Please input 8 numbers:");
	for (int i = 0; i < 8; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 7 - i; j++)
			if (num[j] > num[j + 1]) {
				a = num[j];
				num[j] = num[j + 1];
				num[j + 1] = a;
			}
	}
	printf("After sorting:");
	for (int i = 0; i < 8; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}