#include <stdio.h>

main()
{
	int i, n, k, ans=1;
	
	scanf("%d %d", &n, &k);
	for(i=1;i<=k;i++)
	{
		ans*=n;
	}
	printf ("%d", ans);
}
