#include <stdio.h>

main()
{
    int i, n, sum=0;
    
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	    if(i%10==1)
	    {
	    	sum+=1;
		}
	}
	printf ("%d", sum);
}
