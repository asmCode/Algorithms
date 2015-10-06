#include <stdio.h>

void p1924_four_imps()
{
	//	for (int i = 0; i < 20; i++)
	//	{
	int n;
	scanf("%d", &n);

	//printf("%d: ", n);

	n %= 4;

	n == 1 || n == 2 ? printf("grimy") : printf("black");
	//	}
}
