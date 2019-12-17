//1076_do_while.c
#include <stdio.h>
main()
{
	char m,n='a';
	scanf ("%c", &m);
	do
	{printf ("%c", n);
	n++;
	}
	while (n<=m);
	return 0;
}
