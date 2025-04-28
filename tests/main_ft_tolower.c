#include "../libft.h"

int	main(void)
{
	int	test[] = {-5, 0, 10, 30, 58, 72, 97, 120, 65, 90};

	for (int i = 0; i < 10; i++)
	{
		printf("%d	>>	%d\n", test[i], ft_tolower(test[i]));
	}
	return (0);
}
