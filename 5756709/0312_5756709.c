#include <stdio.h>
#include <time.h>

int main()
{
	int a = 0;
	long int start, stop = 0;
	int p = 0;

	start = clock(); //���� ����
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
	}  //�Ҽ��� �� ���ϴ� ����
	stop = clock(); //���� ����
	printf("%d\n", p); //�Ҽ��� �� ���

	double duration = (double)(stop - start) / CLOCKS_PER_SEC; //�ð� ���

	printf("%f", duration); //�ð� ���
	return 0;
}
