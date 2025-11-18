#include <stdio.h>
#include <math.h>

int main()

{

	int x, result;
	printf("Enter x = ");
	scanf_s("%d", &x);
	(x > 0) ? (result = x + 1) : (result = x * x);
	printf("f(%d) = %d", x, result);
	return 0;
}