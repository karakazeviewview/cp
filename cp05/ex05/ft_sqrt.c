int	ft_sqrt(int	nb)
{
	int	sq_root;

	sq_root = 1;
	while (sq_root * sq_root < nb)
	{
		sq_root++;
		if (sq_root > 46340)
			break ;
	}
	if (sq_root * sq_root == nb)
		return (sq_root);
	else
		return (0);
}
