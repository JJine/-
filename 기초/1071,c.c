#include <stdio.h>
main()
{
    int a;
    reload:
    scanf ("%d", &a);
    printf ("%d\n",a);
    if (a==0) goto end;    
    if (a!=0) goto reload;
    end:
    return 0;
    
}
