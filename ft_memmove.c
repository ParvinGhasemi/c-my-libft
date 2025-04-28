/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/26 13:38:38 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/26 21:47:38 by pmohamma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t		i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *) src;
	if (n == 0)
		return (dst);
	if (dest <= source)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else if (dest > source)
	{
		i = n;
		while (i--)
			dest[i] = source[i];
	}
	return (dst);
}
