#include <stdio.h>
main()
{
    int i, n, k, sum=0; 
    
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    for(i=1;i<n;i++)
    {
        scanf("%d", &k);
        sum-=k;
    }
    printf("%d", sum);
}
