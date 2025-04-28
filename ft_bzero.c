/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/26 11:28:41 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/26 11:28:41 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*str;

	if (len == 0)
		return ;
	str = (char *)s;
	while (len--)
	{
		*str = '\0';
		str++;
	}
}
