#include<stdio.h>
main()
{
	char i,j,c='A';
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
}