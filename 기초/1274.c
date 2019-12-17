#include <stdio.h>
main()
{
	int i, n, a=0;
	
	scanf ("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a++;
		}
		else a=a;
	}
	if(a==2)
	{
		printf("prime");
	}
	else printf("not prime");
}
