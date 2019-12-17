#include <stdio.h>
main()
{
    double h,b,c,s;
    double result;
    scanf ("%d %d %d %d", &h,&b,&c,&s);
    result = h*b*c*s/8388608;
    printf("%.lf MB", result);
    return 0;
}
