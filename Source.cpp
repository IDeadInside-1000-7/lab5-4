#include <stdio.h>;
#include <math.h>;
void main()
{
	float x1, x2, y1, y2, a, b, S, P;
	x1 = 2;
	x2 = 5;
	y1 = 4;
	y2 = 9;
	a = (x2 - x1);
	b = (y2 - y1);
	P = 2 * (a + b);
	printf("P = ");
	printf("%f\n", P);
	S = a * b;
	printf("S = ");
	printf("%f\n", S);
}
