// Sa se calculeze patratul unui numar natural N introdus de la tastatura folosind doar operatiile de tip bitwise

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int patrat(int n)
{
	if (n == 0) return 0;

	// Daca numarul este negativ il transformam in pozitiv
	if (n < 0) n = -n;

	// obtinem partea intreaga a numarului dupa shiftarea la dreapta 
	int x = n >> 1;

	// Verificam daca numarul este par sau impar 
	if (n & 1)
		return ((patrat(x) << 2) + (x << 2) + 1);
	else 
		return (patrat(x) << 2);
}


int main()
{
	int n;
	printf("n= ");
	scanf("%d", &n);
	printf("n^2 = %d\n", patrat(n));
	system("pause");
	return 0;
}