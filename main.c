#include<stdio.h>
#include<stdlib.h>
#include<math.h> // gcc main.c -o program prog -lm
void solveEquation(double a, double b, double c);
void whatEquation(double *aPtr, double *bPtr, double *cPtr);




int main(int argc, char const *argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	printf("Soit une fonction du second degré ax²+bx+c = 0\n");
	printf("Quelle est la valeur de a ?\n");
	scanf("%lf", &a );
	printf("Quelle est la valeur de b ?\n");
	scanf("%lf", &b );
	printf("Quelle est la valeur de c ?\n");
	scanf("%lf", &c );

	solveEquation(a, b, c);
	return 0;
}


void solveEquation(double a, double b, double c)
{

	double delta = pow(b, 2) - 4*a*c;
	if (delta > 0)
	{
		double x1 = (-(b) - sqrt(delta))/(2*a);
		double x2 = (-(b) + sqrt(delta))/(2*a);
		printf("l'équation admet 2 racines distinctes.\n");
		printf("Les solutions de l'équation %lfx²+%lfx+%lfd = 0 sont :\nx1 = %lf\nx2 = %lf \n", a, b, c, x1, x2);
	}
	else if (delta == 0)
	{
		double x1 = (-(b) - sqrt(delta))/(2*a);
		double x2 = (-(b) + sqrt(delta))/(2*a);

		printf("l'équation admet 2 racines identiques.\n");
		printf("Les solutions de l'équation %lfx²+%lfx+%lf = 0 sont :\nx1 = %lf\nx2 = %lf \n", a, b, c, x1, x2);
	}
	else 
	{
		printf("L'équation n'admet pas de racines car le delta est négatif.\n");
	}



}

