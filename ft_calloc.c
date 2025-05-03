/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmohamma <pmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:03:20 by pmohamma          #+#    #+#             */
/*   Updated: 2025/05/03 19:38:33 by pmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_ptr;
	int		mult;

	mult = nmemb * size;
	if ((size_t)mult != nmemb * size)
		return (NULL);
	mem_ptr = (void *)malloc(nmemb * size);
	if (!mem_ptr)
		return (NULL);
	ft_memset(mem_ptr, 0, nmemb * size);
	return (mem_ptr);
}

// here's the command to check the memory leak:
// valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out
