#include <stdio.h>

void p1910_TitanRuinsHiddenEntrance()
{
	int n;
	int *a;

	scanf("%d", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int max = 0;
	int index = 0;

	for (int i = 1; i < n - 1; i++)
	{
		int sum = a[i - 1] + a[i] + a[i + 1];
		if (sum > max)
		{
			max = sum;
			index = i;
		}
	}

	delete[] a;

	printf("%d %d", max, index + 1);
}
