

int		storage_demand(int nbr, int base_length)
{
	int c_bytes;

	c_bytes = 0;
	if (nbr < 0)
	{
		nbr *= (-1);
		c_bytes++;
	}
	while (nbr > 0)
	{
		c_bytes++;
		nbr /= base_length;
	}
	return (c_bytes);
}
