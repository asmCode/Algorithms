#include <stdio.h>

void p2001_MathematiciansAndBerries()
{
	int m1BasketFull;
	int m1BasketEmpty;
	int m2BasketFull;
	int m2BasketEmpty;
	int dummy;

	scanf("%d %d %d %d %d %d",
		&m1BasketFull, &m2BasketFull,
		&dummy, &m2BasketEmpty,
		&m1BasketEmpty, &dummy);

	printf("%d %d", m1BasketFull - m1BasketEmpty, m2BasketFull - m2BasketEmpty);
}
