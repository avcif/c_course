#include <stdio.h>
// yıldızlardan oluşan bir üçgen oluşturmak için kullanılabilir
int main()
{
	int n ;
	
	printf("Kac basamaklı olsun  ");
	scanf("%d", &n);
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int a =0; a<n-i ;a++)
		{
			printf(" ");	
		}
		for(int k=0; k<2*i-1; k++)
		{														
			printf("*");					
		}				
		printf("\n");
		
		
		
		
		
		
	}
	
	return 0;
	
}
