#include <stdio.h>
#include <math.h>

float AB, BC;

double pythagore(int ab, int bc) {
	double result;
	result = ab*ab + bc*bc;
	result = sqrt(result);

	return result;
};

int main() {
	printf("AB ");
	scanf("%f", &AB);
	printf("\nBC ");
	scanf("%f", &BC);
	printf("\nRésultat : %lf\n", pythagore(AB, BC));
	
	return 0;
}
