#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	char	*source;
	char	dest_1[100];
	char	dest_control_1[100];

	int		size;

	printf("\n<<< test: size = 0 >>>\n");
	size = 0;
	source = "aaabbbccc";
	strcpy(dest_1, "abcde");
	ft_strlcpy(dest_1, source, size);
	strlcpy(dest_control_1, source, size);
	printf("'%s'	vs	'%s'\n\n", dest_1, dest_control_1);
	printf("\n<<< test: size > src_len  >>>\n");
	printf("\n<<< test: size < src_len  >>>\n");
	printf("\n<<< test: size = src_len  >>>\n");
	printf("\n<<< test: src_len = 0  >>>\n");
	printf("\n<<< test: dest_len = 0  >>>\n");
	printf("\n<<< test: src_len = dest_len = 0 & size != 0  >>>\n");

	return (0);
}
