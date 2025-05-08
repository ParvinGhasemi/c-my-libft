#include "../libft.h"

char	f3(unsigned int idx, char c)
{
	(void) idx;
	if (c >= '0' && c <= '9')
		return ('#');
	return (c);
}

int	main(void)
{
	char *s3 = "a1b2c3";
	char *r3 = ft_strmapi(s3, f3);
	printf("\"%s\" → \"%s\"\n", s3, r3);  /* prints: "a1b2c3" → "a#b#c#" */
	free(r3);
	return (0);
}

