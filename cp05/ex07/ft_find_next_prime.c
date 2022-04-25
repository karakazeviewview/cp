int	ft_is_prime(int	nb);

int	ft_find_next_prime(int	nb)
{
	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
			nb++;
		return (nb);
	}
}

int	ft_is_prime(int	nb)
{
	long	num;

	num = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	else
	{
		while (num * num <= nb)
		{
			if (nb % num == 0)
				return (0);
			num += 2;
		}
		return (1);
	}
}
