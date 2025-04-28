#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "WHello World";
	printf("Original: %s\n", str);
	printf("Finding 'l': %s\n", strrchr(str, 'l'));
	printf("Finding 'H': %s\n", strrchr(str, 'H'));
	printf("Finding 'h': %s\n", strrchr(str, 'h'));
	printf("Finding 'W': %s\n", strrchr(str, 'W'));
	printf("Finding 'z': %s\n", strrchr(str, 'z'));
	printf("Finding '\\0': %s\n", strrchr(str, '\0'));
	return (0);
}

