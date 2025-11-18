#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("\nEnter y = ");
	scanf_s("%d", &y);
	((y >= 0 && y <= -x + 1) || (y <= -x + 1 && y <= x + 1)) ? printf("true\n") : printf("false");
	return 0;
}