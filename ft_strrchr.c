/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmohamma <pmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:14:06 by pmohamma          #+#    #+#             */
/*   Updated: 2025/05/03 19:47:47 by pmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	character;

	character = (unsigned char)c;
	i = ft_strlen(s);
	if (character == '\0')
		return ((char *)&s[i]);
	while (i-- > 0)
	{
		if (s[i] == character)
			return ((char *)&s[i]);
	}
	return (NULL);
}
