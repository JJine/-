#include <stdio.h>

main()
{
	int i,n,a;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d ", &a);
		
		if(i==1||i==(n+1)/2||i==n)
		printf ("%d", a);
		
		if(n==1)
		{
			printf ("%d %d %d", a, a, a);
		}
	}
}
