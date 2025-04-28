#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char		dest[20];
	char		dest_std[20];
	const char	*src;
	size_t		n;

	/* Test 1: n = 0 */
	src = "ABCDEFGH";
	n = 0;
	memset(dest,     'A', sizeof(dest));
	memset(dest_std, 'A', sizeof(dest_std));
	printf("<<<<< FT_MEMCPY: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest);
	ft_memcpy(dest, src, n);
	memcpy(dest_std, src, n);
	printf("ft: \"%s\"\n", dest);
	printf("sys: \"%s\"\n\n", dest_std);

	/* Test 2: n < src length */
	src = "ABCDEFGH";
	n = 3;
	memset(dest,     0, sizeof(dest));
	memset(dest_std, 0, sizeof(dest_std));
	printf("<<<<< FT_MEMCPY: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest);
	ft_memcpy(dest, src, n);
	memcpy(dest_std, src, n);
	printf("ft: \"%s\"\n", dest);
	printf("sys: \"%s\"\n\n", dest_std);

	/* Test 3: n = src length + 20 (bigger than dst) */
	src = "ABCDEFGH";
	n = strlen(src) + 20;
	memset(dest,     'A', sizeof(dest));
	memset(dest_std, 'A', sizeof(dest_std));
	printf("<<<<< FT_MEMCPY: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest);
	ft_memcpy(dest, src, n);
	memcpy(dest_std, src, n);
	printf("ft: \"%s\"\n", dest);
	printf("sys: \"%s\"\n\n", dest_std);

	/* Test 4: n = 24 (bigger than dst) */
	// >> will give undefined behavior and not matching results
	src = "ABCDEFGHABCDEFGHABCDEFGHABCDEFGH";
	n = strlen(src);
	memset(dest,     'A', sizeof(dest));
	memset(dest_std, 'A', sizeof(dest_std));
	printf("<<<<< FT_MEMCPY: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest);
	ft_memcpy(dest, src, n);
	memcpy(dest_std, src, n);
	printf("ft: \"%s\"\n", dest);
	printf("sys: \"%s\"\n", dest_std);

	return (0);
}
