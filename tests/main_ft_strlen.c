#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	*test_str[] = {"Hello World!", "", "one", "  123Abc ", "   ", "new\nline\t"};
	char	*test_desc[] = {"helloworld", "empty string", "three characters", "nine char mix word","three spaces", "newline & tab"};
	int		i = 0;
	int		ft_length;
	int		length;
	int		count = sizeof(test_str) / sizeof(test_str[0]);

	while (i < count)
	{
		ft_length = ft_strlen(test_str[i]);
		length = strlen(test_str[i]);
		if (ft_length == length)
			printf("Test %d (%s): Passed\n", i + 1, test_desc[i]);
		else
			printf("Test %d (%s): Failed (Expected: %d, Got: %d)\n", i + 1, test_desc[i], length, ft_length);
		i++;
	}
	return (0);
}
