#include "../libft.h"


void	f(unsigned int i, char *c)
{
	(void) i;
	if (*c >= '0' && *c <= '9')
		*c = '#';
	else if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	char str[] = "a1b2c3ZZZ";
	printf("before	->	%s\n", str);
	ft_striteri(str, f);
	printf("after	->	%s\n", str);
	return (0);
}

