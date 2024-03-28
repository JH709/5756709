#include <stdio.h>
#define MAX_DEGREE 101 

typedef struct polynomial {
	int degree;
	float coef[MAX_DEGREE];
}Polynomial;

Polynomial a = { 3, {4.0, 3.0, 2.0, 1.0} };
Polynomial b = { 2, {3.0, 2.0, 8.0} };

void printfPolynomial(Polynomial p);
//Polynomial addPolynomial(Polynomial A, Polynomial B);
Polynomial multPolynomial(Polynomial A, Polynomial B);

main() {

	Polynomial X;

	printf("A : ");
	printfPolynomial(a);
	printf("B : ");
	printfPolynomial(b);

	X = multPolynomial(a, b);

	printf("---------------------------------\n");
	printfPolynomial(X);
}


void printfPolynomial(Polynomial p) {
	for (int i = p.degree; i > 0; i--) {
		printf("%3.1fx^%d + ", p.coef[p.degree - i], i);
	}
	printf("%3.1f \n", p.coef[p.degree]);
}

Polynomial multPolynomial(Polynomial A, Polynomial B) {
	Polynomial C;
	int cPos = 0;
	C.degree = A.degree + B.degree;
	for (int i = A.degree; i >= 0; i--) {
		for (int j = B.degree; j >= 0; j--){
			if()
		}
	}
	return C;
}




/*Polynomial addPolynomial(Polynomial A, Polynomial B) {
	Polynomial C;
	int Apos = 0, Bpos = 0, Cpos = 0;
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = (A.degree > B.degree) ? A.degree : B.degree;
	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {
			C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
			degree_a--; degree_b--;
		}
		else {
			C.coef[Cpos++] = B.coef[Bpos++];
			degree_b--;
		}
	}
	return C;
}*/