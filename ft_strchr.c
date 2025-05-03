/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmohamma <pmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:18:37 by pmohamma          #+#    #+#             */
/*   Updated: 2025/05/03 19:46:54 by pmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strchr(const char *s, int c)
// {
// 	const char	*ptr;
// 	char		character;

// 	character = (char)c;
// 	ptr = s;
// 	while (*ptr)
// 	{
// 		if (*ptr == character)
// 			return ((char *)ptr);
// 		ptr++;
// 	}
// 	if (*ptr == character)
// 		return ((char *)ptr);
// 	return (NULL);
// }

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	character;

	character = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	if (character == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
