#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len;
	char	*trimmed;

	// double check with students what happens
	// when s1 is NULL or set is NULL
	if (!s1)
		return (NULL);
	if (!set)
	{
		trimmed = ft_strdup(s1);
		return (trimmed);
	}
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	while (end > start && s1[end] && is_char_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	// ft_memcpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}


/* 
#include "libft.h"

static int	in_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*trim;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trim = malloc(len + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
 */