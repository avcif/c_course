#include<stdio.h>
#include<stdlib.h>
char  control_f (char c , double temp);
int main(){
	double temp = 0;
	char c;
	printf("Enter temperature(as 32 F - 45 C): ");
	scanf("%lf %c",&temp,&c);
	
	
	double high =0;
	
	printf("Enter high: ");
	scanf("%lf",&high);

	double a =high/300;
	
	
	
		c =control_f(c , temp);
		
		
		
		 if ((temp >= 100-a && c =='C') || (temp >= 212-a*9.0/5.0 && c == 'F')){
			printf("water is gaseous.\n");
			return EXIT_SUCCESS ;
		}else if ((temp>1 && c == 'C') || (temp >32 && c =='f')){
			
			printf("water is liquid.\n");
			return EXIT_SUCCESS ;
			
		}else if ((temp<=0 && c=='C')||(temp<=32 && c== 'F')){
			
			printf("water is solid.\n");
			return EXIT_SUCCESS ;
		}
		return EXIT_SUCCESS; 
}

char control_f(char c , double temp){
	while(c!='C' && c != 'F'){
		printf("Enter a correct temperature(as 32 F - 45 C): ");
		scanf("%lf %c",&temp,&c);
	}
	return c ;
}