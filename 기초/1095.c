#include <stdio.h>

main()
{
	int i, n, a[24], f, min=0;
	
	scanf ("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &f);
		a[i]=f;		
	}
	min=a[0];
	
	for(i=1;i<=n;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	printf ("%d", min);		
}
