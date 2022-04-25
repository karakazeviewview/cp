int	ft_str_is_uppercase(char	*str)
{
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
		{
			str += 1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
