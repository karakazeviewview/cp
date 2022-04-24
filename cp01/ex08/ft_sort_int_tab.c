void	ft_sort_int_tab(int *tab, int size)
{
	int	num1;
	int	num2;
	int	tmp;

	num1 = 0;
	while (num1 < size)
	{
		num2 = num1 + 1;
		while (num2 < size)
		{
			if (*(tab + num2) < *(tab + num1))
			{
				tmp = *(tab + num1);
				*(tab + num1) = *(tab + num2);
				*(tab + num2) = tmp;
			}
			num2++;
		}
		num1++;
	}
}
