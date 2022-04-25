int	ft_sqrt(int	nb);

int	ft_is_prime(int	nb)
{
	int	num;
	int	sq_root;

	num = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	else
	{
		sq_root = ft_sqrt(nb);
		while (num <= sq_root)
		{
			if (nb % num == 0)
				return (0);
			num += 2;
		}
		return (1);
	}
}

int	ft_sqrt(int	nb)
{
	int	sq_root;

	sq_root = 2;
	while (sq_root * sq_root < nb)
	{
		sq_root++;
		if (sq_root > 46340)
			break ;
	}
	return (sq_root);
}
