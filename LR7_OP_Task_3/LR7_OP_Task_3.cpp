#include <stdio.h>
#include <windows.h>
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int x, y, z, max;
    printf("Введіть три додатні числа, кратні 3: ");
    scanf_s("%d %d %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0 || x % 3 != 0 || y % 3 != 0 || z % 3 != 0) {
        printf("Помилка: усі числа повинні бути додатніми і кратними 3.\n");
        return 1;
    }

    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    printf("Найбільше число: %d\n", max);

    return 0;
}