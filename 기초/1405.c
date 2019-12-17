#include <stdio.h>
main()
{
	int i, n, j, k, f, a[100]={0,};
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &f);
		a[i]=f;
	}
	
	for(k=0;k<n;k++)
	{
		j=0;
		for(i=0;i<n;i++)
		{
			if(i+k>n-1)
			{
				printf("%d ", a[j]);
				j++;
			}else printf("%d ", a[k+i]);
		}
		printf("\n");
	}
}
