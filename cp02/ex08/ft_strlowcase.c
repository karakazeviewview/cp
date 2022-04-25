char	*ft_strlowcase(char	*str)
{
	int	cnt_num;

	cnt_num = 0;
	while (str[cnt_num] != '\0')
	{
		if ('A' <= str[cnt_num] && str[cnt_num] <= 'Z')
		{
			str[cnt_num] += 32;
		}
		cnt_num++;
	}
	return (str);
}
