#include<stdio.h>

main()
//54321
//5432
//543
//54
//5
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
	
}
