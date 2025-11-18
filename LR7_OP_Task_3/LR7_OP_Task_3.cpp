#include <stdio.h>
#include <windows.h>
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  
	int X, Y,Z;
	printf("Ââåä³òü Õ = ");
	scanf_s("%d", &X);
	printf("Ââåä³òü Y = ");
	scanf_s("%d", &Y);
	printf("Ââåä³òü Z = ");
	scanf_s("%d", &Z);
	((X > 100) || (Y > 100) || (Z > 100)) ? printf("true\n") : printf("false\n");
    return 0;
}