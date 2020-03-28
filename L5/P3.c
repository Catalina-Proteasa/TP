#include <stdio.h>
#include <stdlib.h>
int st[100], st1[100], vf = -1, vf1 = -1;
void push(int x, int *vf, int st[])
{
	st[++(*vf)] = x;
}
void pop(int *vf, int st[])
{
	if (*vf != -1)
		(*vf)--;
	else
		printf("stiva este goala");
}
int peek(int *vf, int st[])
{
	return st[*vf];
}
int main()
{
	int i, nr, nr1 = 0, x, aux, k;
	printf("Numarul total de elemente: ");
	scanf("%d", &nr);
	for (i = 0; i < nr; i++)
	{
		printf("Elementul %d este:", i + 1);
		scanf("%d", &x);
		aux = x;
		vf = -1;
		k = 1;
		while (aux)
		{
			push(aux % 10, &vf, st);
			aux = aux / 10;
		}
		aux = x;
		while (aux)
		{
			if (aux % 10 != peek(&vf, st))
				k = 0;
			aux = aux / 10;
			vf--;
		}
		if (k == 1)
		{
			printf("Numarul este palindorm\n");
			push(x, &vf1, st1);
			nr1 = nr1 + 1;
		}
		else
			printf("Numarul nu este palindorm\n");

	}
	printf("Stiva creata:\n");
	for (i = 0; i < nr1; i++)
		printf("Elementul %d este: %d\n", i + 1, st1[i]);

	system("pause");
	return 0;
}