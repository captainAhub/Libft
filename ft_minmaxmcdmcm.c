#include "libft.h"

int ft_min(int a, int b)
{
    if (a < b)
        return(a);
    return(b);
}

int ft_max(int a, int b)
{
    if (a > b)
        return(a);
    return (b);
}

int ft_mcd(int a, int b)
{
    if (b == 0)
        return(a);
    return(mcd(b, a % b));
}

int ft_mcm(int a, int b)
{
    return ((a * b) / ft_mcd(a, b));
}
