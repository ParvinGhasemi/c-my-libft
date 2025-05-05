#include "../libft.h"

int	main(void)
{
	char	*new_str;
	char	*s1;
	char	*s2;
	s1 = "hello ";
	s2 = "world";
	new_str = ft_strjoin(s1, s2);
	printf("'%s'	+	'%s'	>>	'%s'\n", s1, s2, new_str);
	return (0);
}
