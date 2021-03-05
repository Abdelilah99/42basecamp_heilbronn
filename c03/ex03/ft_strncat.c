

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>


int main(void) 
{
    
    char dest[] = "first";
    char src[] = "1234";

    printf("%s\n", ft_strncat(dest, src,1));
    return (0);
}
