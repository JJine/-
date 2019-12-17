#include <stdio.h>

main()
{
    char c, d;
    int a[266]={0,}, i;

    for(;scanf("%d", &c);) //EOF 
    {
    	
        a[c]++;
    }
    
    for(d='a'; d<='z' ; d++)
    {
        printf("%c:%d\n", d, a[d]);
    }
    //아스키 코드로 하면 편함N!  
}
