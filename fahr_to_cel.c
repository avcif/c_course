#include <stdio.h>
#include <stdlib.h>

int main()
{
	double fahr;
	double cel ;
	printf("Enter Fahrenheit: ");
	scanf("%lf",&fahr);
	cel = (5.0/9)*(fahr-32.0);
	printf("%.2lf\n",cel);
	return EXIT_SUCCESS ;
}