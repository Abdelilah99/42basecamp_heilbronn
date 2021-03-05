

char	*ft_strupcase(char *str)
{
	char *rtn;

	rtn = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (rtn);
}
