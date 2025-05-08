#include "../libft.h"

int	main(void)
{
	char	*res;

	res = ft_strtrim("  hello  ", " ");
	printf("trim('  hello  ', ' ') = '%s'\n", res);
	free(res);

	res = ft_strtrim("xxhello x world!yxy", "xy");
	printf("trim('xxhello x world!', 'xy') = '%s'\n", res);
	free(res);

	res = ft_strtrim("", "abc");
	printf("trim('', 'abc') = '%s'\n", res);
	free(res);

	res = ft_strtrim("abc", "");
	printf("trim('abc', '') = '%s'\n", res);
	free(res);

	res = ft_strtrim("abc", "abc");
	printf("trim('abc', 'abc') = '%s'\n", res);
	free(res);

	res = ft_strtrim(NULL, "abc");
	printf("trim(NULL, 'abc') = '%s'\n", res);
	free(res);

	res = ft_strtrim("abc", NULL);
	printf("trim('abc', NULL) = '%s'\n", res);
	free(res);
	return (0);
}
