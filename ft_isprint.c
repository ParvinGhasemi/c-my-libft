/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/22 17:42:17 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/24 22:04:54 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispunct(int c)
{
	return ((c >= 33 && c <= 47)
		|| (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96)
		|| (c >= 123 && c <= 126));
}

int	ft_isprint(int c)
{
	return (ft_isalnum(c) || ft_ispunct(c) || c == ' ');
}

// ft_isalnum
// ft_ispunctuation  ! " # $ % & ' ( ) * +, - . / : ; ? @ [ \ ]
// c == ' '
