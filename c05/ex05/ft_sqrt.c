

int		ft_sqrt(int nb)
{
	int i;

	if (nb < 1)
		return (0);
	if (nb > 2147395600)
		return (0);
	i = 1;
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}
