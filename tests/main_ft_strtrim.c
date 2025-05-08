#include "../libft.h"

int	main(void)
{
	char	*res;

	printf("---- ft_strtrim tests ----\n");
	res = ft_strtrim("  hello  ", " ");
	printf("trim(\"  hello  \", \" \") = \"%s\"\n", res);
	free(res);

	res = ft_strtrim("xxfoobaryy", "xy");
	printf("trim(\"xxfoobaryy\", \"xy\") = \"%s\"\n", res);
	free(res);

	res = ft_strtrim("", "abc");
	printf("trim(\"\", \"abc\") = \"%s\"\n", res);
	free(res);

	res = ft_strtrim("abc", "");
	printf("trim(\"abc\", \"\") = \"%s\"\n", res);
	free(res);

	res = ft_strtrim("abc", "abc");
	printf("trim(\"abc\", \"abc\") = \"%s\"\n", res);
	free(res);

	printf("when fd is invalid: fd = -1\n");
	ft_strtrim_fd("Hello World", -1);
	printf("[end]\n");

	printf("when fd is invalid: fd = 0\n");
	ft_strtrim_fd("Hello World", 0);
	printf("[end]\n");

	return (0);
}
