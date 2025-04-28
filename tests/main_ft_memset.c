#include <stdio.h>
#include <string.h>
#include "../libft.h"


int main(void)
{
	char str[50];
	char str_control[50];
	// Test case 1: Basic functionality
	printf("<<<<< FT_MEMSET : 5 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_memset(str, 'A', 5);
	printf("Modified string: %s\n\n", str);
	
	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	ft_memset(str_control, 'A', 5);
	printf("Modified string: %s\n\n\n", str_control);
	

	// Test case 2: testing 0 bytes functionality
	printf("<<<<< FT_MEMSET : 0 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_memset(str, 'A', 0);
	printf("Modified string: %s\n\n", str);
	
	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	ft_memset(str_control, 'A', 0);
	printf("Modified string: %s\n\n\n", str_control);


	// Test case 2: testing for len > string length
	printf("<<<<< FT_MEMSET : 15 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_memset(str, 'A', 15);
	str[15] = '\0';
	printf("Modified string: %s\n\n", str);
	
	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	ft_memset(str_control, 'A', 15);
	str_control[15] = '\0';
	printf("Modified string: %s\n\n\n", str_control);


	// Test case 2: testing for len > char array size (50)
	printf("<<<<< FT_MEMSET : 55 >>>>>\n");
	strcpy(str, "Hello World!");
	printf("Original string: %s\n", str);
	ft_memset(str, 'A', 55);
	printf("Modified string: %s\n\n", str);
	
	strcpy(str_control, "Hello World!");
	printf("Original string: %s\n", str_control);
	ft_memset(str_control, 'A', 55);
	printf("Modified string: %s\n\n\n", str_control);

	return (0);
}
