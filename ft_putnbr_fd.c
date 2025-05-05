
#include "libft.h"

static void	print_num(unsigned int num, int fd)
{
	if (num >= 10)
		print_num(num / 10, fd);
	ft_putchar_fd("0123456789"[num % 10], fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	num = (unsigned int) nb;
	print_num(num, fd);
}

