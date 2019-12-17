#include <stdio.h>
main()
{
	int a,b=0;
	scanf ("%d", &a);
	do {
		printf ("%d\n", b);
		b++;
	}
	while (a!=b-1);
	return 0;
}
