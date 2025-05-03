#include <stdio.h>
// #include <string.h>
#include "../libft.h"

int	main(void)
{
	const char	*s;
	char		*result;
	char		*result_control;

	// 1. Textual search: print the remainder of the string
	s = "Hello World";
	result = ft_memchr(s, 'W', strlen(s) + 1);
	result_control = memchr(s, 'W', strlen(s) + 1);
	printf("Search 'W':\n");
	printf(" ft: \"%s\"\n", result);
	printf(" std: \"%s\"\n\n", result_control);

	// 2. Text for the first occurance of the repeated character
	result  = ft_memchr(s, 'l', strlen(s) + 1);
	result_control = memchr(s, 'l', strlen(s) + 1);
	printf("Search 'l':\n");
	printf(" ft: \"%s\"\n", result);
	printf(" std: \"%s\"\n\n", result_control);

	// 3. Search for missing char: both should be NULL
	result = ft_memchr(s, 'z', strlen(s) + 1);
	result_control = memchr(s, 'z', strlen(s) + 1);
	printf("Search 'z':\n");
	printf(" ft: \"%s\"\n", result);
	printf(" std: \"%s\"\n\n", result_control);

	// 4. Search '\\0': prints empty string
	result  = ft_memchr(s, '\0', strlen(s) + 1);
	result_control = memchr(s, '\0', strlen(s) + 1);
	printf("Search '\\0':\n");
	printf(" ft: \"%s\"\n", result);
	printf(" std: \"%s\"\n\n", result_control);

	// 5. Limit search: no match within first 5 bytes -> NULL
	result  = ft_memchr(s, 'W', 5);
	result_control = memchr(s, 'W', 5);
	printf("Search 'W' within 5 bytes:\n");
	printf(" ft: %s\n", result);
	printf(" std: %s\n\n", result_control);

	return (0);
}
