//Sa se scrie un program care insumeaza elementele intr-o metoda separata de metoda main,folosinf transmiterea prin referinta.
#include<stdio.h>
#include<stdlib.h>
void suma(int a[20], int *n, int *s)
{
	int i;
	for (i = 0; i < *n; i++)
		*s = *s + a[i];
}
int main()
{
	int a[20], n, i, s = 0;
	printf("Dati numarul de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	}
	suma(a, &n, &s);
	printf("Suma este: %d\n", s);
	system("pause");
	return 0;
}
