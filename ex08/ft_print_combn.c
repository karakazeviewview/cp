#include <unistd.h>

void	copy_list(int n, int nbr[9], int *nbr_copy)
{
	int	i;

	i = 0;
	while (i < n)
	{
		nbr_copy[i] = nbr[i];
		i++;
	}
}

void	write_com(int n, int nbr[9])
{
	int	i;
	int	lim;

	i = 0;
	while (i < n)
	{
		lim = n - i - 1;
		if (nbr[i] != 9 - lim)
		{
			write(1, ", ", 2);
			break ;
		}
		i++;
	}
}

void	ft_putnbr(int n, int nbr[9])
{
	int		i;
	char	disp;
	char	c;
	int		flag;

	c = '0';
	i = 0;
	flag = 1;
	while (i < n - 1)
	{
		if (nbr[i] >= nbr[i + 1])
			flag = 0;
		i++;
	}
	i = 0;
	if (flag == 1)
	{
		while (i < n)
		{
			disp = c + nbr[i];
			write(1, &disp, 1);
			i++;
		}
		write_com(n, nbr);
	}
}

void	loop_n(int n, int nbr[9], int carry)
{
	int	i;
	int	j;
	int	lim;
	int	nbr_copy[9];

	i = 0;
	lim = n - carry - 1;
	j = carry + 1;
	copy_list(n, nbr, nbr_copy);
	if (carry == n - 1)
	{
		while (nbr_copy[carry] <= 9)
		{
			ft_putnbr(n, nbr_copy);
			nbr_copy[carry]++;
		}
	}
	else
	{
		while (nbr_copy[carry] <= 9 - lim)
		{
			loop_n(n, nbr_copy, j);
			nbr_copy[carry]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	nbr[9];

	i = 0;
	while (i < n)
	{
		nbr[i] = i;
		i++;
	}
	loop_n(n, nbr, 0);
}
