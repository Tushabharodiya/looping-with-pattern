#include<stdio.h>
main()
{
	char i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			if(j%2==1)
			{
				printf("%d ",1);
			}else
			{
				printf("%d ",0);
			}
		}
	printf("\n");
	}
}