#include "../libft.h"

int	main(void)
{
	int	num;

	num =  -2147483648;
	printf("%d	--> %s\n", num, ft_itoa(num));

	num =  +2147483647;
	printf("%d	--> %s\n", num, ft_itoa(num));

	num = 0;
	printf("%d	-->	%s\n", num, ft_itoa(num));

	num =  -5;
	printf("%d	-->	%s\n", num, ft_itoa(num));

	num =  3;
	printf("%d	-->	%s\n", num, ft_itoa(num));

	num =  12;
	printf("%d	-->	%s\n", num, ft_itoa(num));

	return (0);
}
