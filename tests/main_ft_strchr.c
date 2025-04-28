#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World";
	printf("Original: %s\n", str);
	printf("Finding 'l': %s\n", strchr(str, 'l'));
	printf("Finding 'H': %s\n", strchr(str, 'H'));
	printf("Finding 'h': %s\n", strchr(str, 'h'));
	printf("Finding 'W': %s\n", strchr(str, 'W'));
	printf("Finding 'z': %s\n", strchr(str, 'z'));
	printf("Finding '\\0': %s\n", strchr(str, '\0'));
	return (0);
}
