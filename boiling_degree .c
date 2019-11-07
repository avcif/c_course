#include<stdio.h>
#include<stdlib.h>


int main(){
	double high =0;
	
	printf("Enter high: ");
	scanf("%lf",&high);

	double a =high/300;
	
	double b_p = 100 - a ;
	printf("the boiling point of water is %.2lf\n",b_p);
	return EXIT_SUCCESS;	
}
