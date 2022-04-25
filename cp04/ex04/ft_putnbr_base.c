#include <unistd.h>

int	check(char	c, char	*str)
{
	int	flag;
	int	cnt;

	flag = 0;
	cnt = 0;
	while (*str)
	{
		if (*str == c)
			cnt++;
		if (cnt >= 2)
			flag = 1;
		str++;
	}
	return (flag);
}

void	write_base(char	*str, int	base, long	n)
{
	long	x;
	long	y;
	char	*s;

	x = n % base;
	y = n / base;
	s = str;
	if (y == 0)
	{
		s += x;
		write(1, s, 1);
	}
	else
	{
		write_base(str, base, y);
		s += x;
		write(1, s, 1);
	}
}

void	base_func(char	*str, int	base, int	number)
{
	long	n;

	n = (long)number;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	write_base(str, base, n);
}

void	ft_putnbr_base(int	number, char	*base)
{
	int		cnt;
	int		flag;
	char	*b;

	cnt = 0;
	flag = 1;
	b = base;
	while (*base)
	{
		if (*base == '+' || *base == '-')
			flag = 0;
		else
		{
			if (check(*base, b))
				flag = 0;
			cnt++;
		}
		base++;
	}
	if (flag == 1 && cnt > 1)
		base_func(b, cnt, number);
}
