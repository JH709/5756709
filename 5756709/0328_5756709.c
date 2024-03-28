#include <stdio.h>
#define MAX_DEGREE 101 

typedef struct polynomial {
	int degree;
	float coef[MAX_DEGREE];
}Polynomial;

//Polynomial a = { 3, {4.0, 3.0, 2.0, 1.0} };
Polynomial a = { 6, {7.0, 0.0, 0.0, 5.0, 9.0, 0.0, 1.0} };
//Polynomial b = { 2, {3.0, 2.0, 8.0} };
Polynomial b = { 3, {5.0, 2.0, 1.0, 10.0} };

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

Polynomial multPolynomial(Polynomial A, Polynomial B){
	Polynomial C;
	int cPos = 0;
	C.degree = A.degree + B.degree;

	for (int i = 0; i <= C.degree; i++) {
		C.coef[i] = 0.0;
	} //C.coef에 0.0 넣기

	for (int i = 0; i <= A.degree; i++) {
		for (int j = 0; j <= B.degree; j++) {
			C.coef[i + j] += A.coef[i] * B.coef[j];
		}//모든 항을 곱하고, 같은 차수는 더해질 수 있도록 +=를 씀.
	}

	return C;
}


/* 다항식 덧셈
Polynomial addPolynomial(Polynomial A, Polynomial B) {
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