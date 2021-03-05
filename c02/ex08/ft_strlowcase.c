

char	*ft_strlowcase(char *str)
{
	char *source;

	source = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (source);
}
