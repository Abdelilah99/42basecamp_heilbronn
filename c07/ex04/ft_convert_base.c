

#include <stdlib.h>

int		storage_demand(int nbr, int base_length);

char	*ft_int_to_base(char *new_nbr, int nbr, char *base, int base_length)
{
	int		modulo;

	if (nbr >= base_length || nbr <= base_length * (-1))
	{
		modulo = nbr % base_length;
		modulo *= (modulo < 0) ? (-1) : 1;
		new_nbr = ft_int_to_base(new_nbr, nbr / base_length, base, base_length);
		*(new_nbr++) = base[modulo];
		return (new_nbr);
	}
	if (nbr < 0 && nbr > (-1) * base_length)
	{
		*new_nbr = '-';
		new_nbr++;
		nbr *= -1;
		*(new_nbr++) = base[nbr];
		return (new_nbr);
	}
	if (nbr >= 0 && nbr < base_length)
	{
		*(new_nbr++) = base[nbr];
		return (new_nbr);
	}
	return (new_nbr);
}

int		check_base(char *base)
{
	char	*move_base;
	int		base_length;
	int		counter;
	int		char_occur;

	base_length = 0;
	move_base = base;
	while (*move_base)
	{
		counter = 0;
		char_occur = 0;
		while (base[counter] != '\0')
		{
			if (base[counter] == *move_base)
				char_occur++;
			counter++;
		}
		if (char_occur > 1)
			return (0);
		if (*move_base == '-' || *move_base == '+')
			return (0);
		base_length++;
		move_base++;
	}
	return (base_length);
}

char	*move_to_number(int *sign, char *str)
{
	*sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= (-1);
		str++;
	}
	return (str);
}

int		ft_base_to_int(char *str, char *base, int base_length)
{
	int	sign;
	int	value;
	int	digit;

	value = 0;
	str = move_to_number(&sign, str);
	while (*str)
	{
		digit = 0;
		while (base[digit] != '\0')
		{
			if (base[digit] == *str)
				break ;
			digit++;
		}
		if (base[digit] != '\0')
			value = value * base_length + digit;
		else
			return (value * sign);
		str++;
	}
	return (value * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_length_from;
	int		base_length_to;
	int		int_nbr;
	char	*new_nbr;
	char	*last_char;

	base_length_from = check_base(base_from);
	base_length_to = check_base(base_to);
	if (base_length_from < 2 || base_length_to < 2)
		return (0);
	int_nbr = ft_base_to_int(nbr, base_from, base_length_from);
	new_nbr = malloc(storage_demand(int_nbr, base_length_to) + 1);
	last_char = ft_int_to_base(new_nbr, int_nbr, base_to, base_length_to);
	*last_char = '\0';
	return (new_nbr);
}
#include <stdio.h>
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

int    main(void)
{
    char nbr[] = "  \n  \t  +--+++-101011i8";
    char base_from[] = "01";
    char base_to[] = "0123456789ABCDEF";
    
    printf("expected: -2B\n");
    printf("in main: %s\n",ft_convert_base(nbr, base_from, base_to));
}
