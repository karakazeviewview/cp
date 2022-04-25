int	ft_str_is_printable(char	*str)
{
	int	cnt_num;

	cnt_num = 0;
	while (str[cnt_num] != '\0')
	{
		if (str[cnt_num] < ' ' || '~' < str[cnt_num])
		{
			return (0);
		}
		cnt_num++;
	}
	return (1);
}
