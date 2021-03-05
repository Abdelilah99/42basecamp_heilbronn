
void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int		i1;

	ft_putchar('A');
	i1 = 1;
	while (i1 < x - 1)
	{
		ft_putchar('B');
		i1++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_print_body(int x, int y)
{
	int		i1;
	int		i2;

	i2 = 1;
	while (i2 < y - 1)
	{
		ft_putchar('B');
		i1 = 1;
		while (i1 < x - 1)
		{
			ft_putchar(' ');
			i1++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		i2++;
	}
}

void	ft_print_bottom(int x)
{
	int		i1;

	ft_putchar('A');
	i1 = 1;
	while (i1 < x - 1)
	{
		ft_putchar('B');
		i1++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_top(x);
	if (y != 1)
	{
		ft_print_body(x, y);
		ft_print_bottom(x);
	}
}
