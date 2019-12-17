#include <stdio.h>

main()
{
	int i, n, a[1000]={0,}, f;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &f);
		a[i]=f;
	}
	for(i=n;i>=1;i--)
	{
		printf("%d ", a[i]);
	}
	
}
