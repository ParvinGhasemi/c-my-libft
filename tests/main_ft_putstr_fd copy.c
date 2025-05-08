#include "../libft.h"

int	main(void)
{
	printf("<<<< ft_putstr_fd tests >>>>\n");
	printf("Expected: 'Hello World'\n");
	printf("Actual:   '");
	ft_putstr_fd("Hello World", 1);
	printf("'\n");

	printf("Expected: ''\n");
	printf("Actual:   '");
	ft_putstr_fd("", 1);
	printf("'\n");

	printf("Expected: '(NULL)'\n");
	printf("Actual:   '(NULL)");
	ft_putstr_fd(NULL, 1);
	printf("'\n");

	printf("when fd is invalid: fd = -1\n");
	ft_putstr_fd("Hello World", -1);
	printf("'\n");

	printf("when fd is invalid: fd = 0\n");
	ft_putstr_fd("Hello World", 0);
	printf("'\n");
	return (0);
}
