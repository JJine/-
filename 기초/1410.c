#include <stdio.h>
main()
{
	char c;
	int ope=0, clo=0;
	
	while(scanf("%c", &c) != EOF )
	{
		if(c == '(')
		{
			ope++;
		}
		if(c == ')')
		{
			clo++;
		}
	}
	printf("%d %d", ope, clo);
}
