#include <stdio.h>
main()
{
	int i, n, t, a[24]={0,};
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		scanf ("%d ", &t);
		a[t]=a[t]+1;
	}
	
	for(i=1;i<=23;i++)
	{
		printf("%d ", a[i]);
	}
	
}
