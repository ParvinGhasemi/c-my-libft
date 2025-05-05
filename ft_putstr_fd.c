#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int	i;

	i = 0;
	// if (fd < 0)
	// 	return ;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}