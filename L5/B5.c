#include <stdio.h>
#include <stdlib.h>
int st[100], vf = -1, vf2 = -1, st2[100], st3[100], vf3 = -1;
void push(int x)
{
	vf++;
	st[vf] = x;
}
void push2(int x)
{
	vf2++;
	st2[vf2] = x;
}
void push3(int x)
{
	vf3++;
	st3[vf3] = x;
}
void pop()
{
	vf = vf - 1;
}
int peek()
{
	return st[vf];
}

int binar(int nr)
{
	int binar = 0, c = 1;
	while (nr)
	{
		binar = binar + (nr % 2) * c;
		c = c * 10;
		nr = nr / 2;
	}
	return binar;
}



int main()
{

	int x, i, k, j, nr = 0;
	for (i = 1; i <= 50; i++)
	{
		push(i);
	}
	for (i = 0; i <50; i++)
	{
		k = 0;
		for (j = 2; j <= st[i] / 2; j++)
		{
			if (st[i] % j == 0)
			{
				k = 1;
				break;
			}
		}
		if (k == 0 && i != 0)
		{
			nr++;
			x = binar(i + 1);
			push2(x);
		}
		else
			push3(i + 1);
	}

	printf("\n");
	printf("Stiva 1\n");
	for (i = 1; i <= 50 - nr; i++)
	{
		printf("Stiva 1 element %d este %d\n", i, st3[i - 1]);
	}
	printf("\n");
	printf("Stiva 2\n");
	for (i = 0; i < nr; i++)
	{
		printf("Stiva 2 element %d este %d\n", i + 1, st2[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}