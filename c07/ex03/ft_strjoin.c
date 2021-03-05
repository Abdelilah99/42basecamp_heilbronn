

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_cache;

	dest_cache = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_cache);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *dest_cache;

	dest_cache = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_cache);
}

int		f_slen(char *str)
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c_size;
	int		len_sep;
	char	*help_str;
	char	*ret_str;

	if (size == 0)
	{
		ret_str = malloc(sizeof(char));
	}
	len_sep = f_slen(sep);
	ret_str = malloc(1);
	*ret_str = '\0';
	ret_str = ft_strcat(ret_str, strs[0]);
	c_size = 0;
	while (++c_size < size)
	{
		help_str = ft_strcpy(malloc(f_slen(ret_str) + 1), ret_str);
		ret_str = malloc(f_slen(help_str) + f_slen(strs[c_size]) + len_sep + 1);
		ret_str = ft_strcpy(ret_str, help_str);
		ret_str = ft_strcat(ret_str, sep);
		ret_str = ft_strcat(ret_str, strs[c_size]);
		free(help_str);
	}
	return (ret_str);
}

#include <stdio.h>
char    *ft_strjoin(int size, char **strs, char *sep);

int    main(void)
{
    char    *sep = "area";
    char    *str1 = "Hallo";
    char    *str2 = "Welt";
    char    *str3 = "wie";
    char    *strs[3];
    
    strs[0] = str1;
    strs[1] = str2;
    strs[2] = str3;
    
    printf("output: %s\n", ft_strjoin(3, strs, sep));
}
