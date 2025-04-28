
#include "../libft.h"

int	main(void)
{
	int	test[] = {-5, 0, 10, 30, 58, 72, 97, 120, 97, 122};

	for (int i = 0; i < 10; i++)
	{
		printf("%d	>>	%d\n", test[i], ft_toupper(test[i]));
	}
	return (0);
}
