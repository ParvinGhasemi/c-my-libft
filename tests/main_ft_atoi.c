#include "../libft.h"
#include <stdlib.h>

int	main(void)
{
	char	*ptr;
	// int		fd;
	// int		system;

	ptr = "hi";
	printf("'%s'\n fd:	%d\n sys:	%d\n\n", ptr, ft_atoi(ptr), atoi(ptr));
	ptr = "  	 	\n	+4321abc123";
	printf("'%s'\n fd:	%d\n sys:	%d\n\n", ptr, ft_atoi(ptr), atoi(ptr));
	ptr = "\t	\r	\v -2345aaa1";
	printf("'%s'\n fd:	%d\n sys:	%d\n\n", ptr, ft_atoi(ptr), atoi(ptr));
	ptr = "   +-+123";
	printf("'%s'\n fd:	%d\n sys:	%d\n\n", ptr, ft_atoi(ptr), atoi(ptr));
	return (0);
}
