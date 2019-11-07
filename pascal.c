#include <stdio.h>

int main()
{
	int t=1 , j, n, space, i;
		
	printf("Enter number  of rows : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		for(space=0; space<n-i;space++)
			printf("  ");
		
		for(j=0;j<=i;j++)
		{	
			// her satırın başına 1 yazması için 
			if (i==0 || j==0  )
				printf("1");	
			
			else
			{
				t=t*(i-j+1)/j;
				printf("%4d",t);
			}
		}
		printf("\n");
		
	}
	return 0;
	
}