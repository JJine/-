//1078.c
#include <stdio.h>
main()
{
	int sum=0;
	int a,b;
	scanf ("%d",&a);
	for (b=0;b<=a;b++)
		  {
		  if (b%2==0)
		  sum=sum+b;
	}
		  printf ("%d\n",sum);
		  return 0;
}
