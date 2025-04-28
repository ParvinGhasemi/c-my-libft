#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n);

int	main(void)
{
	char	*src;
	char	dest_1[10];
	char	dest_control_1[10];
	char	dest_2[10];
	char	dest_control_2[10];
	char	dest_3[10];
	char	dest_control_3[10];
	size_t	n;

	/* Test 1: n = 0 */
	src = "ABCDEFGH";
	n = 0;
	memset(dest_1, 0, sizeof(dest_1));
	memset(dest_control_1, 0, sizeof(dest_control_1));
	// strcpy(dest_1, "AAAAAAAAAA");
	// strcpy(dest_control_1, "BBBBBBBBBB");
	printf("<<<<< FT_MEMMOVE: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest_1);
	ft_memmove(dest_1, src, n);
	memmove(dest_control_1, src, n);
	printf("ft: \"%s\"\n", dest_1);
	printf("sys: \"%s\"\n\n", dest_control_1);

	/* Test 2: n = 3 */
	src = "ABCDEFGH";
	n = 3;
	memset(dest_2, 0, sizeof(dest_2));
	memset(dest_control_2, 0, sizeof(dest_control_2));
	// strcpy(dest_2, "AAAAAAAAAA");
	// strcpy(dest_control_2, "BBBBBBBBBB");
	printf("<<<<< FT_MEMMOVE: n = %zu >>>>>\n", n);
	printf("before: \"%s\"\n", dest_2);
	ft_memmove(dest_2, src, n);
	memmove(dest_control_2, src, n);
	printf("ft: \"%s\"\n", dest_2);
	printf("sys: \"%s\"\n\n", dest_control_2);

	/* Test 3: n = 15 */
	src = "ABCDEFGH";
	n = 13;
	memset(dest_3, 0, sizeof(dest_3));
	memset(dest_control_3, 0, sizeof(dest_control_3));
	// strcpy(dest_2, "AAAAAAAAAA");
	// strcpy(dest_control_2, "BBBBBBBBBB");
printf("<<<<< FT_MEMMOVE: n = %zu --> undefined behavior!!! >>>>>\n", n);
	printf("before: \"%s\"\n", dest_3);
	ft_memmove(dest_3, src, n);
	memmove(dest_control_3, src, n);
	printf("ft: \"%s\"\n", dest_3);
	printf("sys: \"%s\"\n\n", dest_control_3);
	return(0);
}
