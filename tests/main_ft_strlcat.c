#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	char	*source;
	size_t	ft;
	size_t	sys;
	size_t	size;

	printf("\n<<< test: size > dst_len + src_len >>>\n");
	char	dest_1[20];
	char	dest_control_1[20];
	size = 20;
	source = "AAABBBCCC";
	strcpy(dest_1, "abcde");
	strcpy(dest_control_1, "abcde");
	ft = ft_strlcat(dest_1, source, size);
	sys = strlcat(dest_control_1, source, size);
	printf("'%zu'	vs	'%zu'\n", ft, sys);
	printf("'%s'	vs	'%s'\n\n", dest_1, dest_control_1);


	printf("\n<<< test: dst + src > size == dst_len  >>>\n");
	char	dest_2[6];
	char	dest_control_2[6];
	size = 6;
	source = "AAA";
	// strcpy(dest_2, "abcde");
	// strcpy(dest_control_2, "abcde");
	ft = ft_strlcat(dest_2, "AAA", size);
	sys = strlcat(dest_control_2, "AAA", size);
	printf("'%zu'	vs	'%zu'\n", ft, sys);
	printf("'%s'	vs	'%s'\n\n", dest_2, dest_control_2);

	printf("\n<<< test: size - 1 == dst_len  >>>\n");
	char	dest_3[5];
	char	dest_control_3[5];
	size = 5;
	source = "AAA";
	strcpy(dest_3, "abcd");
	strcpy(dest_control_3, "abcd");
	ft = ft_strlcat(dest_3, source, size);
	sys = strlcat(dest_control_3, source, size);
	printf("'%zu'	vs	'%zu'\n", ft, sys);
	printf("'%s'	vs	'%s'\n\n", dest_3, dest_control_3);

	printf("\n<<< test: size == srclen < dest_len >>>\n");
	char	dest_4[6];
	char	dest_control_4[6];
	size = 6;
	source = "AAAAAA";
	strcpy(dest_4, "aa");
	strcpy(dest_control_4, "aa");
	ft = ft_strlcat(dest_4, source, size);
	sys = strlcat(dest_control_4, source, size);
	printf("'%zu'	vs	'%zu'\n", ft, sys);
	printf("'%s'	vs	'%s'\n\n", dest_4, dest_control_4);

	// printf("\n<<< test: size = src_len  >>>\n");


	// printf("\n<<< test: src_len = 0  >>>\n");


	// printf("\n<<< test: dest_len = 0  >>>\n");


	// printf("\n<<< test: src_len = dest_len = 0 & size != 0  >>>\n");

	return (0);
}
