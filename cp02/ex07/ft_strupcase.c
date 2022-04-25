char	*ft_strupcase(char	*str)
{
	int	cnt_num;

	cnt_num = 0;
	while (str[cnt_num] != '\0')
	{
		if ('a' <= str[cnt_num] && str[cnt_num] <= 'z')
		{
			str[cnt_num] -= 32;
		}
		cnt_num++;
	}
	return (str);
}
