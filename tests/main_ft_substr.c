#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	*str;
	char	*my_sub;

	str = "0123456789";
	my_sub = ft_substr(str, 3, 3);
	printf("'%s', 3, 3	>>	%s\n", str, my_sub);
	my_sub = ft_substr(str, 3, 12);
	printf("'%s', 3, 12	>>	%s\n", str, my_sub);
	my_sub = ft_substr(str, 10, 3);
	printf("'%s', 10, 3	>>	%s\n", str, my_sub);
	my_sub = ft_substr(str, 11, 3);
	printf("'%s', 11, 3	>>	%s\n", str, my_sub);
	str = "";
	my_sub = ft_substr(str, 0, 2);
	printf("'%s', 0, 2	>>	'%s'\n", str, my_sub);
	my_sub = ft_substr(str, 2, 10);
	printf("'%s', 2, 10	>>	'%s'\n", str, my_sub);
	str = NULL;
	// printf("\ntesting for str == NULL -> should crash\n");
	my_sub = ft_substr(str, 0, 0);
	printf("'%s', 11, 3	>>	'%s'\n", str, my_sub);

	return (0);
}
