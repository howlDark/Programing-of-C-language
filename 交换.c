#include <stdio.h>

int main() {
	int a, b;
	a = 2;
	b = 5;
	printf("now a = %5d,and b = %5d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after swapping...\n");
	printf("now a = %5d,and b = %5d", a, b);
	return 0;
}
