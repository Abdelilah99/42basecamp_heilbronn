
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j < size - 1)
		{
			x = tab[j];
			y = tab[j + 1];
			if (x > y)
			{
				tab[j] = y;
				tab[j + 1] = x;
			}
			j++;
		}
		i++;
	}
}
