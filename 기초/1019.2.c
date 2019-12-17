#include <stdio.h>
main()
{
    int y,m,t,g,p,d;
    scanf ("%04d%02d%02d-%01d%03d%03d", &y,&m,&t,&g,&p,&d);
    printf ("%04d%02d%02d%01d%03d%03d",y,m,t,g,p,d);
    return 0;
}
