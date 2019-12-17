#include <stdio.h>

main()
{
    int i, j, n, k;
    
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
        printf("*");
        for(k=1;k<=n-2;k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
}
