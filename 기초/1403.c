#include <stdio.h>
main()
{
	int i, n, j, f, a[100]={0,};
	
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &f);
		a[i]=f;
	}
	for(j=1;j<=2;j++)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d\n", a[i]);
		}
	}
}
