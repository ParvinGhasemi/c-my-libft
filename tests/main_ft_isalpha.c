/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_isalpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/24 17:51:51 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/24 19:48:23 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// cc -Wall -Wextra -Werror main_ft_isalpha.c ../libft.a -o my_isalpha
// ./my_isalpha

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int	character;

	// checking for non-alphabetical character
	character = 12;
	printf("%d is alpha? >>	%d\n", character, ft_isalpha(character));
	if (ft_isalpha(character) == (isalpha(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for non-alphabetical characters\n\n\n");
	}

	// checking for alphabetical character: lowercase
	character = 97;
	printf("isalpha 97	>>	%d\n", isalpha(character));
	printf("%d is alpha? >>	%d\n", character, ft_isalpha(character));
	if (ft_isalpha(character) == (isalpha(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for lowercase characters\n\n\n");
	}

	// checking for alphabetical character: uppercase
	character = 70;
	printf("isalpha 70	>>	%d\n", isalpha(character));
	printf("%d is alpha? >>	%d\n", character, ft_isalpha(character));
	if (ft_isalpha(character) == (isalpha(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for uppercase characters\n\n\n");
	}

	// checking for numeric character
	character = 48;
	printf("%d is alpha? >>	%d\n", character, ft_isalpha(character));
	if (ft_isalpha(character) == (isalpha(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for uppercase characters\n\n\n");
	}

	// checking for alphabetical character: uppercase
	character = -10;
	printf("isalpha -10	>>	%d\n", isalpha(character));
	printf("%d is alpha? >>	%d\n", character, ft_isalpha(character));
	if (ft_isalpha(character) == (isalpha(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for uppercase characters\n\n\n");
	}

	return (0);
}
