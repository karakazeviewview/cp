#include <unistd.h>

void	ft_write(int	nb)
{
	char	c;

	c = '0';
	c += nb;
	write(1, &c, 1);
}

void	writenum(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int	nb)
{
	int	x;
	int	y;

	if (nb == -2147483648)
		writenum();
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		x = nb / 10;
		y = nb % 10;
		if (x != 0)
			ft_putnbr(x);
		ft_write(y);
	}
}
