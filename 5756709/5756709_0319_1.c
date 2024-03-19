#include <stdio.h>
#include <time.h>

long testTime(void) {
	return 0;
}

long factorial_iter(int n)
{
	long k, v = 1;
	for (k = n; k > 0; k--)
		v = v * k;
	return(v);
}

long factorial_rec(int n)
{
	if (n <= 1) return 1;
	else return (n * factorial_rec(n - 1));
}


int main(int argc, char* argv[])
{

	clock_t start_iter, end_iter, start_rec, end_rec;

	start_iter = clock();
	long result_iter = factorial_iter(20);
	end_iter = clock();

	printf("Factorial Iterative Result: %ld\n", result_iter);
	printf("Time: %f\n", (float)(end_iter - start_iter) / CLOCKS_PER_SEC);

	start_rec = clock();
	long result_rec = factorial_rec(20);
	end_rec = clock();

	printf("Factorial Recursive Result: %ld\n", result_rec);
	printf("Time: %f\n", (float)(end_rec - start_rec) / CLOCKS_PER_SEC);

	return 0;
}