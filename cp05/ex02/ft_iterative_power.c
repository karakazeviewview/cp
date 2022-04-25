int	ft_iterative_power(int	nb, int	power)
{
	int	itera;

	if (power >= 0)
	{
		itera = 1;
		while (power)
		{
			itera *= nb;
			power--;
		}
		return (itera);
	}
	else
		return (0);
}
