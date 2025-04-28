/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_isascii.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/24 20:11:05 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/24 20:19:54 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int		test_chars[] = {-1, 0, 65, 127, 128};
	char	*test_desc[] = {"negative", "null", "letter A", "DEL", "extended"};
	size_t	count = sizeof(test_chars) / sizeof(test_chars[0]);
	size_t	i = 0;
	int		c;

	while (i < count)
	{
		c = test_chars[i];
		printf("%d:		ft_isascii = %d,	isascii = %d\n",
			c, ft_isascii(c), isascii(c));
		if (ft_isascii(c) == isascii(c))
			printf("OK\n\n");
		else
			printf("KO for %s\n\n", test_desc[i]);
		i++;
	}
	return (0);
}
