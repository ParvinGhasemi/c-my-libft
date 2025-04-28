#include <stdio.h>
#include <strings.h>
#include "../libft.h"

int main(void)
{
	char str[50];
	char str_control[50];
	// Test case 1: Basic functionality len = 0
	printf("<<<<< FT_BZERO : 0 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_bzero(str, 0);
	printf("Modified string: %s\n\n", str + 0);

	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	bzero(str_control, (0));
	printf("Modified string: %s\n\n\n", str_control + 0);
	// Test case 2: Basic functionality
	printf("<<<<< FT_BZERO : 5 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_bzero(str, 5);
	printf("Modified string: %s\n\n", str + 5);

	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	bzero(str_control, 5);
	printf("Modified string: %s\n\n\n", str_control + 5);
	// Test case 3: testing 15 bytes functionality (longer than string length)
	printf("<<<<< FT_BZERO : 5 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_bzero(str, 15);
	printf("Modified string: %s\n\n", str + 5);

	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	bzero(str_control, 15);
	printf("Modified string: %s\n\n\n", str_control + 5);

	return (0);
}
