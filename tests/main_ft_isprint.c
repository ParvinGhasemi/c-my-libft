#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int		test_chars[]  = {-10, 0, 31, 32, 48, 65, 97, 126, 127, 128, 2147483647};
	char	*test_desc[]  = {"negative", "null", "unit", "space", "digit", "upper", "lower", "tilde", "DEL", "out of ascii", "max int"};
	size_t	count         = sizeof(test_chars) / sizeof(test_chars[0]);
	size_t	i             = 0;
	int		c;

	while (i < count)
	{
		c = test_chars[i];
		printf("%d: ft_isprint = %d, isprint = %d\n",
			c,
			ft_isprint(c),
			isprint((unsigned char)c));
		if ((ft_isprint(c) != 0) ==
			(isprint((unsigned char)c) != 0))
			printf("OK\n");
		else
			printf("KO for %s\n", test_desc[i]);
		i++;
	}
	return (0);
}
