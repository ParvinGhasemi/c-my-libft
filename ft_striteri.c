#include "libft.h"


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	// size_t	i;
	
	if (!s || !f)
		return ;
	len = ft_strlen(s);
	// i = 0;
	// while (i < len)
	// {
	// 	f(i, &s[i]);
	// 	i++;
	// }
	while (len--)
	{
		f(len, &s[len]);
		printf("s[%zu] = %c\n", len, s[len]);
	}
}
