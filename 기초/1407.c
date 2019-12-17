#include <stdio.h>
main()
{
	char a;
	
	while(scanf("%c", &a) != EOF)
	{
		if(a != ' ')
			printf("%c", a);
	}
	
}
