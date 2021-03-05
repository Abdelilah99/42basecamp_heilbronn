

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		sum;
	char	temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		sum = nb * (-1);
	}
	else
		sum = nb;
	if (sum >= 10)
		ft_putnbr(sum / 10);
	temp = (sum % 10) + '0';
	write(1, &temp, 1);
}
