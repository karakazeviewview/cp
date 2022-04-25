int	ft_atoi(char	*str)
{
	int	number;
	int	symbol;

	number = 0;
	symbol = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '_')
			symbol *= -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			number = (*str - '0') + number * 10;
		else
			break ;
		str++;
	}
	number *= symbol;
	return (number);
}
