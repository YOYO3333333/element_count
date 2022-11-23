#include <stddef.h>
#include <stdio.h>

size_t element_count(int *begin, int *end)
{
    return (size_t)(end - begin);
}
