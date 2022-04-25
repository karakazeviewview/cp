int	ft_strlen(char *base)
{
	char	*b;

	b = base;
	while (*b)
		b++;
	return (b - base);
}

int	seebase(char *base)
{
	char	*b;
	char	*b2;

	b = base;
	while (*b)
	{
		if (*b == '+' || *b == '-')
			return (1);
		b2 = b + 1;
		while (*b2)
		{
			if (*b == *b2)
				return (1);
			b2++;
		}
		b++;
	}
	return (0);
}

int	base_to_n(char	*base, char	n)
{
	int	i;

	i = 0;
	while (*base++ != n)
		i++;
	return (i);
}

int	ft_atoi(char	*str, char	*base, int	base_n)
{
	int	length;
	int	nbr;
	int	base_cpy;
	int	total;

	length = ft_strlen(str);
	nbr = 0;
	total = 0;
	base_cpy = 1;
	while (length > 0)
	{
		total += base_cpy * base_to_n(base, str[length - 1]);
		base_cpy *= base_n;
		length--;
	}
	return (total);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	base_n;

	if (seebase(base))
		return (0);
	base_n = ft_strlen(base);
	return (ft_atoi(str, base, base_n));
}
