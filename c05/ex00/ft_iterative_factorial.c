

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int k;

	if (nb == 0)
		return (1);
	if ((nb == 1) || (nb == 2))
		return (nb);
	if (nb <= 0)
		return (0);
	i = 3;
	k = 2;
	while (i <= nb)
	{
		k *= i;
		i++;
	}
	return (k);
}
