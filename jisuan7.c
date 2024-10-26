#include <stdio.h>
#include <stdlib.h>
int  main( )
{
	int a =0;
	int i = 1;
	while(i<=100)
	{
		if (i%7==0 || i%10==7)
		{
			a=a+i;
		}
		

		i=i+1;
	

	}

	printf("%d\n",a );

	return 0;
}