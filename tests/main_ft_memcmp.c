#include "../libft.h"

int	main(void)
{
	char	*first_str;
	char	*second_str;
	int		n;

	first_str = "123";
	second_str = "223";
	n = 2;
	printf("'%s'	vs	'%s'\n", first_str, second_str);
	printf("n	= %d\n ft:	%d\nsys:	%d\n\n", n, \
		ft_memcmp(first_str, second_str, n), \
		memcmp(first_str, second_str, n));

	first_str = "223";
	second_str = "123";
	n = 0;
	printf("'%s'	vs	'%s'\n", first_str, second_str);
	printf("n	= %d\n ft:	%d\nsys:	%d\n\n", n, \
		ft_memcmp(first_str, second_str, n), \
		memcmp(first_str, second_str, n));

	first_str = "";
	second_str = "a";
	n = 2;
	printf("'%s'	vs	'%s'\n", first_str, second_str);
	printf("n	= %d\n ft:	%d\nsys:	%d\n\n", n, \
		ft_memcmp(first_str, second_str, n), \
		memcmp(first_str, second_str, n));

	first_str = "";
	second_str = "";
	n = 2;
	printf("'%s'	vs	'%s'\n", first_str, second_str);
	printf("n	= %d\n ft:	%d\nsys:	%d\n\n", n, \
		ft_memcmp(first_str, second_str, n), \
		memcmp(first_str, second_str, n));

	first_str = "aaab";
	second_str = "aaaa";
	n = 10;
	printf("'%s'	vs	'%s'\n", first_str, second_str);
	printf("n	= %d\n ft:	%d\nsys:	%d\n\n", n, \
		ft_memcmp(first_str, second_str, n), \
		memcmp(first_str, second_str, n));
		return (0);
}
