#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	char	*result;
	char	*result_control;
	printf("Testing for 'aa' in an empty string\n");
	result = ft_strnstr("", "aa", 5);
	result_control = strnstr("", "aa", 5);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);

	printf("Testing for an empty string in 'aa' but len=0\n");
	result = ft_strnstr("aa", "", 0);
	result_control = strnstr("aa", "", 0);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);

	printf("Testing for 'aa' in an empty string\n");
	result = ft_strnstr("", "aa", 5);
	result_control = strnstr("", "aa", 5);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);

	printf("Testing for 'aa' in 'bbccaabb' wher len=7\n");
	result = ft_strnstr("bbccaabb", "aa", 7);
	result_control = strnstr("bbccaabb", "aa", 7);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);

	printf("Testing for 'nana ' in 'hi bananananana bye' wher len=25\n");
	result = ft_strnstr("hi bananananana bye", "nana ", 25);
	result_control = strnstr("hi bananananana bye", "nana ", 25);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);

	printf("Testing for 'ell ' in 'hello babe' wher len=5\n");
	result = ft_strnstr("hello babe babe", "ell", 5);
	result_control = strnstr("hello babe babe", "ell", 5);
	printf("ft	vs	system\n");
	printf("%s	vs	%s\n\n\n", result, result_control);
	return (0);
}
