#include <stdio.h>
#include <math.h>
#define Phi (1 + sqrt(5)) / 2
#define phi (1 - sqrt(5)) / 2

int fib(int n) {
	return (int)((pow(Phi, n) - pow(phi, n)) / sqrt(5));
}

int problem_2() {
	int i = 5;
	int n = 0;
	int sum = 0;
	while (n <= 4000000) {
		sum += n;
		n = fib(i);
		i += 2;
	}
	printf("Problem 2 Ans: %d\n", sum);
	return 0;
}

int problem_4() {
	int a;
	int b;
	int reversed = 0;
	for (a = 999; a > 0; a--) {
		for (b = 999; b > 0; b--) {
			int product = a * b;
			int original = product;
			while (product > 0) {
				reversed = reversed * 10 + product % 10;
				product /= 10;
			}
			if (reversed == original) {
				printf("Problem 4 Ans: %d\n", original);
				return 0;
			}
			reversed = 0;
		}
	}
	return 0;
}