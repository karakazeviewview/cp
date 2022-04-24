void	ft_ultimate_div_mod(int *a, int *b)
{
	int	remainder;

	remainder = *a % *b;
	*a = *a / *b;
	*b = remainder;
}
