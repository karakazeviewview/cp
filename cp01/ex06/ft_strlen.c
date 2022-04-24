int	ft_strlen(char *str)
{
	char	*stout_string;
	int		word_count;

	stout_string = str;
	word_count = 0;
	while (*stout_string != 0)
	{
		word_count++;
		stout_string++;
	}
	return (word_count);
}
