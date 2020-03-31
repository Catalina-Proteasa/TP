#include <stdio.h>
#include <stdlib.h>
int st[100], st1[100], vf = -1, vf1 = -1;
void push(int x, int *vf, int st[])
{
	++(*vf);
	st[*vf] = x;
}
void pop()
{
	if (vf != -1)
		vf--;
	else
		printf("stiva goala");
}
int peek()
{
	return st[vf];
}
int main()
{
	int i, x, inv, co, k, n, nr = 0;
	do
	{
		printf("Numarul total de numere: ");
		scanf("%d", &n);
	} while (n <= 0);
	for (i = 0; i < n; i++)
	{
		printf("Numarul %d este:", i + 1);
		scanf("%d", &x);
		inv = x;
		co = x;
		k = 1;
		while (inv)
		{
			co = inv % 10;
			push(co, &vf, st);
			inv = inv / 10;
		}
		inv = x;
		do
		{
			if (inv % 10 != peek())
				k = 0;
			inv = inv / 10;
			vf--;
		} while (vf != -1);

		if (k == 1)
		{
			printf("Numarul este palindorm\n");
			push(x, &vf1, st1);
			nr = nr + 1;
		}
		else
			printf("Numarul nu este palindorm\n");

	}
	printf("\n");
	printf("Stiva ce contine palindroamele:\n");
	printf("\n");
	for (i = 0; i < nr; i++)
		printf("\t Elementul %d este: %d\n", i + 1, st1[i]);
	printf("\n");
	system("pause");
	return 0;
}