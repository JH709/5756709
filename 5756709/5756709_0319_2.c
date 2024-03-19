#include <stdio.h>
#include <time.h>

long testTime(void) {
	return 0;
}

long power_iter(long x, int n)
{
	long i;
	long result = 1;
	for (i = 0; i < n; i++)
		result = result * x;
	return(result);
}


long power_rec(long x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0)
		return power_rec(x * x, n / 2);
	else return x * power_rec(x * x, (n - 1) / 2);
}


int main(int argc, char* argv[])
{

	clock_t start_iter, end_iter, start_rec, end_rec;

	start_iter = clock();
	long result_iter = power_iter(13, 21);
	end_iter = clock();

	printf("Power Iterative Result: %ld\n", result_iter);
	printf("Time: %f\n", (float)(end_iter - start_iter) / CLOCKS_PER_SEC);

	start_rec = clock();
	long result_rec = power_rec(13, 21);
	end_rec = clock();

	printf("Power Recursive Result: %ld\n", result_rec);
	printf("Time: %f\n", (float)(end_rec - start_rec) / CLOCKS_PER_SEC);

	return 0;
}