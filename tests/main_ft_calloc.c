#include "../libft.h"

int	main(void)
{
	printf("<<<<	printing results for nmemb=23 & size is very big number to overflow	>>>>\n");
	int			nmemb = 23;
	long int	size = 10516151541561;
	int 		*result = (int *)ft_calloc(nmemb , size);
	int			i = 0;
	if(!result)
	{
		printf("ERROR\n\n\n");
	}
	else
	{
		while (i < nmemb * size)
		{
			if (result[i] == 0)
			printf("%d" , result[i]);
			i++;
		}
		free (result);
		printf("\n The number of allocated bytes	->	%d\n\n\n", i);
	}

	printf("<<<<	printing results for nmemb=13 & size=4	>>>>\n");
	int			nmemb_2 = 13;
	long int	size_2 = 4;
	int 		*result_2 = (int *)ft_calloc(nmemb_2 , size_2);
	int			j = 0;
	if(!result_2)
	{
		printf("%s \n\n\n" , "ERROR");
	}
	else
	{
		while (j < nmemb_2 * size_2)
		{
			if (result_2[j] == 0)
			printf("%d" , result_2[j]);
			j++;
		}
		free (result_2);
		printf("\n The number of allocated bytes	->	%d\n\n\n", j);
	}

	printf("<<<<	printing results for nmemb or size is zero	>>>>\n");
	int			nmemb_3 = 0;
	long int	size_3 = 4;
	int 		*result_3 = (int *)ft_calloc(nmemb_3 , size_3);
	int			k = 0;
	if(!result_3)
	{
		printf("%s \n\n\n" , "ERROR");
	}
	else
	{
		while (k < nmemb_3 * size_3)
		{
			if (result_3[k] == 0)
			printf("%d" , result_3[k]);
			k++;
		}
		free (result_3);
		printf("\n The number of allocated bytes	->	%d\n\n", k);
	}
	return 0;

}

// here's the command to check the memory leak:
// valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out
