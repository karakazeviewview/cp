void	ft_rev_int_tab(int *tab, int size)
{
	int	int_array;
	int	swap_number;

	int_array = 0;
	while (int_array < size)
	{
		swap_number = tab[int_array];
		tab[int_array] = tab[size - 1];
		tab[size - 1] = swap_number;
		int_array++;
		size--;
	}
}
