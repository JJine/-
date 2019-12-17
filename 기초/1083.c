#include <stdio.h>
main()
{
	int a,b=0;
	scanf ("%d", &a);
	while (a!=b)
	{
		b++;
		if (b%3==0)
		{  
		 printf ("X "); 
		}
		else { printf ("%d ",b);
		}
	}
	return 0;
}
