

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			++i;
		}
		ft_putchar('\n');
	}
	return (0);
}
