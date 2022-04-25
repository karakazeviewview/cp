char	*ft_strstr(char	*str, char	*to_find)
{
	int	num1;
	int	num2;

	num1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[num1] != '\0')
	{
		num2 = 0;
		while (str[num1 + num2] == to_find[num2] && str[num1 + num2] != '\0')
		{
			if (to_find[num2 + 1] == '\0')
				return (&str[num1]);
			num2++;
		}
		num1++;
	}
	return (0);
}
