#include <stdio.h>

main()
{
	int i, n, a,  max=0;
	
	scanf("%d", &n);
	scanf("%d", &max);
	for(i=1;i<=n;i++)
	{
		scanf("%d ", &a);
		if(max<a)
		{
			max=a;
		}
	}
	printf ("%d", max);
}
