/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_isalnum.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/24 19:49:24 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/24 20:07:13 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int character;

	character = 133;
	printf("%d -> %d\n", character, ft_isalnum(character));

	// checking for alphabetical character: uppercase
	character = 1500;
	printf("%d -> %d\n", character, ft_isalnum(character));
	printf("isalnum 1500	>>	%d\n", isalnum(character));
	printf("%d is alnum? >>	%d\n", character, ft_isalnum(character));
	if (ft_isalnum(character) == (isalnum(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for big integers\n\n\n");
	}

	// checking for alphabetical character: uppercase
	character = 80;
	printf("isalnum 80	>>	%d\n", isalnum(character));
	printf("%d is alnum? >>	%d\n", character, ft_isalnum(character));
	if (ft_isalnum(character) == (isalnum(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for uppercase characters\n\n\n");
	}

	// checking for alphabetical character: lowercase
	character = 120;
	printf("isalnum 120	>>	%d\n", isalnum(character));
	printf("%d is alnum? >>	%d\n", character, ft_isalnum(character));
	if (ft_isalnum(character) == (isalnum(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for lowercase characters\n\n\n");
	}

	// checking for negative int
	character = -10;
	printf("isalnum -10	>>	%d\n", isalnum(character));
	printf("%d is alnum? >>	%d\n", character, ft_isalnum(character));
	if (ft_isalnum(character) == (isalnum(character) != 0))
		printf("OK\n\n\n");
	else
	{
		printf("KO");
		printf("\nit's not working for negative integers\n\n\n");
	}
	return (0);
}
