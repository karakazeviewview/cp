int	ft_iterative_factorial(int	nb)
{
	int	factor;

	if (nb >= 0)
	{
		factor = 1;
		while (nb)
		{
			factor *= nb;
			nb--;
		}
		return (factor);
	}
	else
		return (0);
}
