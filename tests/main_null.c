#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "AAA";
    /* this call must not return, but cause a segfault */
    if (!ft_memcpy(str , NULL, 3))
		printf ("hiiii");

    /* if we ever reach here, it means it did *not* crash */
    return (1);
}
