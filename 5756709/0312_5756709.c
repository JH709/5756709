#include <stdio.h>
#include <time.h>

int main()
{
	int a = 0;
	long int start, stop = 0;
	int p = 0;

	start = clock(); //측정 시작
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
	}  //소수의 합 구하는 루프
	stop = clock(); //측정 종료
	printf("%d\n", p); //소수의 합 출력

	double duration = (double)(stop - start) / CLOCKS_PER_SEC; //시간 계산

	printf("%f", duration); //시간 출력
	return 0;
}
