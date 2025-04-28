/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_isdigit.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/24 20:28:07 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/24 22:03:43 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int		test_chars[] = {-10, 0, 50, 65, 127, 1900};
	char	*test_desc[] = {"negative", "null", "digit", "letter A", "DEL", "a big integer"};
	int		count = sizeof(test_chars) /sizeof(test_chars[0]);
	int		i;
	int		character;

	i = 0;
	while (i < count)
	{
		character = test_chars[i];
		printf("%d:	ft_isascii -> %d,	isascii -> %d\n", \
			character, ft_isascii(character), isascii(character));
		if (ft_isdigit(character) == isdigit(character))
			printf("OK\n\n");
		else
			printf("KO for %s\n\n", test_desc[i]);
		i++;
	}
	return (0);
}
