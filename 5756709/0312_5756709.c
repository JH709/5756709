#include <stdio.h>

int main()
{
	int a = 0;
	int p = 0;

	for (int n = 2; n <= 100; n++)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) {
				a = 1;
				break;
			}
		}

		if (a == 0)
		{
			p = p + n;
		}

		a = 0;
	}
	printf("%d\n", p);

	return 0;
}