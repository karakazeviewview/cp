#include <unistd.h>
void	ft_change(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_change('8');
	}
	else if (n < 0)
	{
		ft_change('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_change(48 + n % 10);
	}
}
