

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	char	*str_buffer;
	int		src_length;

	src_length = ft_strlen(src);
	new_str = malloc(src_length + 1);
	str_buffer = new_str;
	while (*src)
	{
		*new_str = *src;
		src++;
		new_str++;
	}
	*new_str = '\0';
	return (str_buffer);
}

#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);
int    main(void)
{
    char str[] = "hello\nlo";
    printf("expected: %s\n", strdup(str));
    printf("outputed: %s\n", ft_strdup(str));
}
