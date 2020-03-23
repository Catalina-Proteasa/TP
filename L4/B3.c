//Sa se realizeze un program care interschimba 2 valori folosind un pointer ca variabila auxiliara.
#include<stdio.h>
void main()
{
	int a, b, *aux;
	aux = (int*)malloc(sizeof(int));
	printf("Introduceti a: ");
	scanf("%d", &a);
	printf("Introduceti b: ");
	scanf("%d", &b);
	*aux = a;
	a = b;
	b = *aux;
	printf("\nDupa interschimbare: \n");
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}