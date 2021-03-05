

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nbo;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	i = 1;
	nbo = nb;
	while (i++ < power)
		nb *= nbo;
	return (nb);
}
