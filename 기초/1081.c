//1082.c
#include <stdio.h>
main()
{
	char a=0,b;
	scanf ("%X", &b);
	for (a=1;a<16;a++)
	{
		printf ("%X*%X=%X\n",b,a,a*b);
	}
	return 0;
}
