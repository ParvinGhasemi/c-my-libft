/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmohamma <pmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:18:37 by pmohamma          #+#    #+#             */
/*   Updated: 2025/04/27 18:00:54 by pmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *strchr(const char *s, int c)
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
	size_t	i;
	char	character;

	character = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	if (character == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
