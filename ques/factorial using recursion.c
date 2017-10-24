#include <stdio.h>

    long unsigned facto(long unsigned n)
    {
        if(n>0)
        {
            return(n*facto(n-1));
        }else
        {
            return 1;
        }
    }

    int main()
    {
        long unsigned n;
        long unsigned fact;
        scanf("%ld",&n);
        fact=facto(n);
        printf("%ld",fact);
        return 0;
    }

