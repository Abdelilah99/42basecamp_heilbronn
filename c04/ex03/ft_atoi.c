

#include <stdio.h>

int	ft_isspace(char ch);
int	ft_isdigit(char ch);

int	ft_atoi(char *str)
{
	int n;
	int sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n = 0;
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (sign * n);
}

int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t' ||
	ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_isdigit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
