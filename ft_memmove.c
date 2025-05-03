/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmohamma <pmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:38:38 by pmohamma          #+#    #+#             */
/*   Updated: 2025/05/03 22:08:19 by pmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_forward( \
	unsigned char *dest, const unsigned char *source, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
}

static void	ft_copy_backward( \
	unsigned char *dest, const unsigned char *source, size_t n)
{
	while (n--)
		dest[n] = source[n];
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src || n == 0)
		return (dst);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest < source)
		ft_copy_forward(dest, source, n);
	else
		ft_copy_backward(dest, source, n);
	return (dst);
}

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	unsigned char		*dest;
// 	const unsigned char	*source;
// 	size_t				i;

// 	if (dst == NULL && src == NULL && n > 0)
// 		return (NULL);
// 	dest = (unsigned char *)dst;
// 	source = (const unsigned char *) src;
// 	if (n == 0)
// 		return (dst);
// 	if (dest <= source)
// 	{
// 		i = 0;
// 		while (i < n)
// 		{
// 			dest[i] = source[i];
// 			i++;
// 		}
// 	}
// 	else if (dest > source)
// 	{
// 		i = n;
// 		while (i--)
// 			dest[i] = source[i];
// 	}
// 	return (dst);
// }
