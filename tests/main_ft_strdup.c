#include "../libft.h"

int	main(void)
{
	char	*str_1 = "hi";
	char	*str_2 = "";
	char	*str_3 = "hello there";

	printf("ft		vs		system\n");
	printf("%s		vs		%s\n", ft_strdup(str_1), strdup(str_1));
	printf("%s		vs		%s\n", ft_strdup(str_2), strdup(str_2));
	printf("%s		vs		%s\n", ft_strdup(str_3), strdup(str_3));

	free(str_1);
	// free(str_2);
	free(str_3);
	return (0);
}
