#include <stdio.h>
main()
{
	int n,b;
	scanf ("%d", &n);
	reget:
		scanf ("%d",&b);
		printf ("%d\n",b);
		if(--n!=0) goto reget;
		return 0;
}
