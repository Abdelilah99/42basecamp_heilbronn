

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int dest_i;
	int src_i;

	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

int        main(void)
{
    char dest[] = "Hello";
    char src[] = " World";

    printf("said %s \n", ft_strcat(dest, src));
    return (0);
}
