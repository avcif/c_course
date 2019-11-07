#include<stdio.h>
// Satranç tahtasında verilen hücrenin rengini buluyor
int main() 
{
	
	int c , l ,t;
	printf("Enter the number of line: ");
    scanf("%d", &l);
	
	
	printf("Enter the number of column: ");
    scanf("%d", &c);
	
	t = l +c ;
	
	if(t % 2 == 0)
        printf("This cell is BLACK\n");
    else
        printf("This cell is WHITE\n");
	
	
	return 0;
	
}