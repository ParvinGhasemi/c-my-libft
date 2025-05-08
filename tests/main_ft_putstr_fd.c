#include "../libft.h"

int	main(void)
{
	char	*res;

	printf("\n---- ft_putstr_fd tests ----\n");
	printf("Expected: [begin]Hello World[end]\n");
	printf("Actual:   [begin]");
	ft_putstr_fd("Hello World", 1);
	printf("[end]\n");

	printf("Expected: [begin(empty)][end]\n");
	printf("Actual:   [begin(empty)]");
	ft_putstr_fd("", 1);
	printf("[end]\n");

	printf("Expected: [begin(NULL)][end]\n");
	printf("Actual:   [begin(NULL)]");
	ft_putstr_fd(NULL, 1);
	printf("[end]\n");

	printf("when fd is invalid: fd = -1\n");
	ft_putstr_fd("Hello World", -1);
	printf("[end]\n");

	printf("when fd is invalid: fd = 0\n");
	ft_putstr_fd("Hello World", 0);
	printf("[end]\n");
	return (0);
}