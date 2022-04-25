int	ft_str_is_alpha(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 'A')
			|| (('Z' < str[count]) && (str[count] < 'a')) || 'z' < str[count])
		{
			return (0);
		}
		count++;
	}
	return (1);
}
