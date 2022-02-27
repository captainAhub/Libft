#include "libft.h"

int radix_search(int *array, int array_size, int target)
{
    int lb;
    int ub;
    int mid;

    lb = -1;
    ub = array_size;
    while(ub - lb > 1)
    {
        mid = (ub + lb) / 2;
        if (array[mid] < target)
            lb = mid;
        else if (array[mid] > target)
            ub = mid;
        else 
            return (mid);
    }
    return (-1);
}