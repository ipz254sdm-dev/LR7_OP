#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("\nEnter y = ");
	scanf_s("%d", &y);
	((x >= 0 && y <= 1 - x) || (y <= 1 - x && y <= 1 + x)) ? printf("true\n") : printf("false");
	return 0;
}