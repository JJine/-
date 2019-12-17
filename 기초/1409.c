#include <stdio.h>
main()
{
	int k, a, i, b[100]={0,};
	
	for(i=1;i<=10;i++)
	{
		scanf("%d", &a);
		b[i]=a;
	}
	
	scanf("%d", &k);
	printf("%d", b[k]);
	
}
